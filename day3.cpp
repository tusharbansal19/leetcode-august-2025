class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& f, int sp, int k) {
        int n=f.size(), mx=0;
        vector<int>psm(n, 0) , ps(n, 0);
        
        int sm=0;
      
        for(int i=0;i<n;i++)
        {
            ps[i]=f[i][0];
            psm[i]=f[i][1]+(i>0?psm[i-1]:0);
            
            
        }
            for(int d=0;d<=k;d++)
            {
                int i=sp-d;
                int j=sp+(k-2*d);
                int left=lower_bound(ps.begin(), ps.end(), i)-ps.begin();
                int right =upper_bound(ps.begin(), ps.end(), j)-ps.begin()-1;

                if(left<=right)
                {
                    mx=max(mx, (psm[right]-(left>0?psm[left-1]:0)));
                }
               j=sp+d;
               i=sp-(k-2*d);
                 left=lower_bound(ps.begin(), ps.end(), i)-ps.begin();
                 right =upper_bound(ps.begin(), ps.end(), j)-ps.begin()-1;

                if(left<=right)
                {
                    mx=max(mx, (psm[right]-(left>0?psm[left-1]:0)));
                }




            }
        return mx;
        
    }
};

// Time Complexity: O(n log n)
// Space Complexity: O(n)