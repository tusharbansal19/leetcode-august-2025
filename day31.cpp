#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    // Function to check if a digit is valid in the current position
    bool valid(int row, int col, char digit, vector<vector<char>>& board) {
        // Check row
        for(int x = 0; x < 9; x++) {
            if(board[row][x] == digit) return false;
        }
        
        // Check column
        for(int x = 0; x < 9; x++) {
            if(board[x][col] == digit) return false;
        }
        
        // Check 3x3 box
        int startRow = row - row % 3;
        int startCol = col - col % 3;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(board[i + startRow][j + startCol] == digit) 
                    return false;
            }
        }
        
        return true;
    }
    
    bool solve(vector<vector<char>>& board, int row = 0, int col = 0) {
        // If we've filled all cells, puzzle is solved
        if(row == 9) return true;
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