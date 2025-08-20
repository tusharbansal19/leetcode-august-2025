class Solution {
public:
    int maximum69Number (int n) {
        string s=to_string(n);
        n=s.size();
        for(int a=0;a<n;a++)
        {
            if(s[a]=='6')
            {
                s[a]='9';
            break;
            }
        }
        
        return stoi(s);


        
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)
