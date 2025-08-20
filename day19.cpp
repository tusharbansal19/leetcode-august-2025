class Solution {
public:
    int countSquares(vector<vector<int>>& nm) {
        int n=nm.size(), m=nm[0].size();
        vector<int>dp(m+1, 0);
        // dp=nm[0];
        int sm=0;
        for(int i=0;i<n;i++)
        { 
             vector<int>p(m+1, 0);
             for(int j=1;j<=m;j++)
             {
                if(nm[i][j-1]==1){

                int mn=min(dp[j-1], min(dp[j], p[j-1]));
                p[j]=mn+1;
                sm+=p[j];
                }

                
             }
             dp=p;
        }        
        return sm;
    }
};

// Time Complexity: O(n*m)
// Space Complexity: O(m)