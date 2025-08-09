class Solution {
public:
void make(int i,int l, int r, vector<int>&nm,vector<int>&seg )
{
    if(l==r){
    seg[i]=nm[l];
return;
    }
    int md=(l+r)/2;
    make(i*2+1, l, md, nm, seg);
    make(i*2+2, md+1, r, nm, seg);
    seg[i]=max(seg[i*2+1], seg[i*2+2]);

}  
bool check(int i,int l, int r, int val,vector<int>&seg )
{
    if(seg[i]<val)
    return false;


    if(l==r)
    {
        seg[i]=-1;
        return true;
    }
    int md=(l+r)/2;
    bool place=false;
    if(seg[i*2+1]>=val)
    place=check(i*2+1, l, md, val, seg);
    else
     place=check(i*2+2, md+1, r, val, seg);


    seg[i]=max(seg[i*2+1], seg[i*2+2]); 


    return place;
}



    int numOfUnplacedFruits(vector<int>& ft, vector<int>& bk) {
        
        int n=ft.size();
        int c=n;

        vector<int>seg(n*4, -1);
        make(0, 0, n-1, bk, seg);

        for(int i=0;i<n;i++)
        {
         if(check(0,0, n-1,ft[i],seg ))
         {
            c--;
         }
            
        }
        return c;
    }
};
// Time Complexity: O(nlog(n))
// Space Complexity: O(4n)