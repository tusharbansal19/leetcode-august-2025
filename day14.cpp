class Solution {
public:
    string largestGoodInteger(string nm) {
        char c=nm[0], mx='e';
        int n=nm.size(), cnt=0;
        
        for(int i=0;i<n;i++)
        {
            if(nm[i]==c)
            cnt++;
            else
            {
                cnt=1;
                c=nm[i];
            }
            if((cnt==3)&&(mx=='e'||mx<c))
            mx=c;

        }
        cout<<mx;
        string str(3, mx);
        return str[0]!='e'? str : "";
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)