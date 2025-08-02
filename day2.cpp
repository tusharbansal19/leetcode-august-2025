# define all(x) x.begin(), x.end()
// auto solve()
class Solution {
public:
    long long minCost(vector<int>& b1, vector<int>& b2){
    unordered_map<int,int>mp;
    vector<int>v;
    int mn=INT_MAX;
        for(int a : b1){
        mp[a]++;
        mn=min(mn, a);

        }
    for(int a : b2){
          mn=min(mn, a);

        mp[a]--;   
    }

        for(auto & it: mp)
        {

            int x=abs(it.second);
            int a=it.first;
            if(x%2==1)
            return -1;
            for(int i=0;i<(x/2);i++)
            v.push_back(a);
        } 
      
      sort(all(v));
        long long sm=0;
        for(int i=0;i<(v.size()/2);i++)
        sm+=v[i];

        return sm;
    
    
    }
};