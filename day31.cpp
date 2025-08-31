class Solution {
public:
bool valid(int r, int c, char d, vector<vector<char>>& nm){
    for(int i=0;i<9;i++){
        if(nm[r][i]==d||nm[i][c]==d)
        return 0;
    }
        int t=(r/3)*3, l=(c/3)*3;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(nm[i+t][j+l]==d)
                return 0;
            }
        }
    return 1;
}
    bool solve(int r, int c, vector<vector<char>>& nm) {
        if (r == 9) return true; // Completed the board

        if (c == 9) // Move to next row
            return solve(r + 1, 0, nm);

        if (nm[r][c] != '.') // Skip filled cells
            return solve(r, c + 1, nm);

        for (char x = '1'; x <= '9'; x++) {
            if (valid(r, c, x, nm)) {
                nm[r][c] = x;
                if (solve(r, c + 1, nm)) return true; // Move to next cell
                nm[r][c] = '.'; // Backtrack
            }
        }

        return false; // No valid digit found
    }


    void solveSudoku(vector<vector<char>>& nm) {
    int x=solve(0, 0, nm);
    // return nm;
        
    }
};

// Time Complexity: O(9^(N*N)), where N is the grid size (9 for Sudoku)
// Space Complexity: O(1), for the recursion stack