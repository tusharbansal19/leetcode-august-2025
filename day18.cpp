class Solution {
public:
long long fct(int a)
{
    long long sm=0;
    while(a)
    {
        sm+=a;
        a--;
    }
    return sm;
}
    long long zeroFilledSubarray(vector<int>& nm) {
        long long sm=0;
        long long cnt=0;
        nm.push_back(-1);
        int n=nm.size();
        for(int i=0;i<n;i++)
        {
            if(nm[i]==0)
            cnt++;
            else
            {
                sm+=((cnt+1)*(cnt)/2);
                cnt=0;
            }
        }
        return sm;
        
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)
