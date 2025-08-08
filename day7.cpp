class Solution {
    vector<vector<double>> dp;

public:
    double soupServings(int n) {
        if (n > 5000) return 1.0;

        int units = (n + 24) / 25; // convert mL to 25mL units
        dp.assign(units + 1, vector<double>(units + 1, 0));

        auto getVal = [&](int a, int b) {
            if (a <= 0 && b <= 0) return 0.5;
            if (a <= 0) return 1.0;
            if (b <= 0) return 0.0;
            return dp[a][b];
        };

        for (int i = 0; i <= units; i++) {
            for (int j = 0; j <= units; j++) {
                if (i == 0 && j == 0) { dp[i][j] = 0.5; continue; }
                if (i == 0) { dp[i][j] = 1.0; continue; }
                if (j == 0) { dp[i][j] = 0.0; continue; }
                dp[i][j] = 0.25 * (
                    getVal(i - 4, j) +
                    getVal(i - 3, j - 1) +
                    getVal(i - 2, j - 2) +
                    getVal(i - 1, j - 3)
                );
            }
        }

        return dp[units][units];
    }
};
