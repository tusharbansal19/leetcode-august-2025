class Solution {
public:
bool solve( vector<double>& nm)
{
    int n=nm.size();
    if(n==1)
    {
        return (fabs(nm[0] - 24) < 1e-6)? 1: 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
        if(i==j)
        continue;

        vector<double>tmp;
        for(int k=0;k<n;k++)
        {
            if(k!=i&&k!=j)
            tmp.push_back(nm[k]);
        }
        double a=nm[i], b=nm[j];
        vector<double> v={a+b, a-b, b-a, a*b};
        if(b!=0)
        v.push_back(a/b);

        for(auto x: v)
        {
            tmp.push_back(x);
            if(solve(tmp))
            return 1;
            tmp.pop_back();
        }
        
    }

    }
    return false;
}
    bool judgePoint24(vector<int>& cd) {
        vector<double>dv;
        for(auto a : cd)
        dv.push_back(1.0*a);
        
        return solve(dv);
    }
};


// Time Complexity: O(n^4)
// Space Complexity: O(n*m)