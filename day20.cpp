class Solution {
public:
    int minimumArea(vector<vector<int>>& nm) {
        int n=nm.size(), m=nm[0].size();
        int l=m, r=0, t=n, b=0;
        for(int i=0;i<n;i++)
        {
            int f=0;
            for(int j=0;j<m;j++)
        {
            if(nm[i][j]==1)
            {
                f=1;
                l=min(l,j);
                r=max(r,j);
            }
        }
        if(f)
        {
            t=min(i,t);
            b=max(i,b);
        }

        }
       
        return (r-l+1)*(b-t+1);
    }
};

// Time Complexity: O(n*m)
// Space Complexity: O(1)