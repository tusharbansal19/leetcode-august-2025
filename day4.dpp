class Solution {
public:
    int totalFruit(vector<int>& ft) {
        int n=ft.size();

        unordered_map<int, int>mp;

        int mx=0, l=0;
        for(int r=0;r<n;r++)
        {
            mp[ft[r]]++;
            if(mp.size()>2)
            {
                mp[ft[l]]--;
                if(mp[ft[l]]==0)
                mp.erase(ft[l]);
                l++;
            }
            mx=max(mx, r-l+1);
            
        }
        return mx;
        
    }
};