class Solution {
public:
bool check(string &s, string m)
{
    sort(m.begin(), m.end());
    // sort(m.begin(), m.end())
    return s==m?1:0;

    
    
}
    bool reorderedPowerOf2(int n) {
        // sort(n)
         string s= to_string(n);
         sort(s.begin(), s.end());
         n=s.size();
         

        for(int i=0;i<32;i++)
        {
           string m= to_string(int(1<<i));
        //    cout<<m<<endl;
           int x=m.size();
            if(x==n&&check(s, m))
            return true;
        
        }
        return false;
        
    }
};


// Time Complexity: O(1) 
// Space Complexity: O(1) 