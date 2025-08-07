class Solution {
public:
    int rc(vector<vector<int>>& ft) {
        int n = ft.size();
        vector<int> dp(n + 1, 0);
        dp[n - 1] = ft[n - 1][n - 1];
        for (int i = n - 2; i >= 0; i--) {
            vector<int> p(n + 1, 0);
            for (int j = i + 1; j < n; j++) {
                int x = max(dp[j], max(dp[j - 1], dp[j + 1]));
                p[j] = ft[i][j] + x;
            }
            // cout<<endl;

            dp = p;
        }
        return dp[n - 1];
    }
    int maxCollectedFruits(vector<vector<int>>& ft) {
        int n = ft.size();

        int sm = rc(ft);
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                sm += ((j == i) ? ft[i][j] : 0);
                swap(ft[i][j], ft[j][i]);
                // cout<<ft[i][j]<<endl;
            }
        }

        int x = rc(ft);
        cout << sm << " : " << x << endl;
        sm += x - 2 * (ft[n - 1][n - 1]);
        return sm;
    }
};