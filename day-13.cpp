class Solution {
public:
    bool isPowerOfThree(int n) {

        
       long long  x=(long long int)n, c=pow(3, 19);

       return x>0&&(c%x==0);

        
    }
};

// Time Complexity: O(1)
// Space Complexity: O(1)