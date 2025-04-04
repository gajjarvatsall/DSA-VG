#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool isSafe(int digit, int row, int col, vector<vector<char>>& board) {
            for (int i = 0; i < 9; i++) {
                if (board[row][i] == digit) {
                    return false;
                }
            }
            for (int i = 0; i < 9; i++) {
                if (board[i][col] == digit) {
                    return false;
                }
            }
            for (int i = 0; i < 9; i++) {
                if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == digit) {
                    return false;
                }
            }
            return true;
        }
        bool solve(vector<vector<char>>& board) {
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
    
                    if (board[i][j] == '.') {
                        for (char k = '1'; k <= '9'; k++) {
    
                            if (isSafe(k, i, j, board) == true) {
    
                                board[i][j] = k;
                                bool nextSolve = solve(board);
                                if (nextSolve == true) {
                                    return true;
                                } else {
                                    board[i][j] = '.';
                                }
                            }
                        }
                        return false;
                    }
                }
            }
            return true;
        }
        void solveSudoku(vector<vector<char>>& board) { bool ans = solve(board); }
    };
int main()
{
    
    return 0;
}