class Solution {
public:
long long M=1e9+7;

    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        // int x=n;/
        vector<int>dp, ans;
        for(int i=0;i<32;i++)
        {   
            if(n&1<<i)
            dp.push_back((1<<i));
        }
      
        auto solve=[&](int a, int b){
            long long sm=1;
            while(a<=b)
            {
                sm=(sm*(long long)dp[a])%M;
                a++;
            }
            return (int)sm;

        };
    
        for(auto a : queries){
            ans.push_back(solve(a[0], a[1]));
        }
        
        return ans;
    }
};

// Time Complexity: O(32 * Q) where Q is the number of queries
// space Complexity: O(32) for storing powers of 2
