class Solution {
public:
    bool isPowerOfTwo(int n) {
return (n>0&&(n&(n-1))==0);

    
        
        
    }
};

// or- ->>>

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int cnt=0;
    for(int i=0;i<32;i++)
    {
        if(n&(1<<i))
        cnt++;
    }
return n>0&&cnt==1;

    
        
        
    }
};
// Time Complexity: O(1)
// Space Complexity: O(1)