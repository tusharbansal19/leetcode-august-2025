class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<int>dp(1, 1);
        vector<vector<int>>ans;
            ans.push_back(dp);
        for(int i=1;i<n;i++){
          vector<int>p;
          p.push_back(dp[0]);
          for(int j=1;j<i;j++)
          {
            p.push_back(dp[j-1]+dp[j]);
          }  
          p.push_back(dp[i-1]);
          dp=p;
          ans.push_back(dp);
        }
        return ans;
    }
};