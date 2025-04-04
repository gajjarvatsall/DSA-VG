#include <bits/stdc++.h>
using namespace std;

unordered_map<int, bool> rowCheck;
unordered_map<int, bool> diaUp;
unordered_map<int, bool> diaDown;

void storeSolution(int n, vector<vector<string>> &ans,
                   vector<vector<char>> &board)
{
    vector<string> tempAns;
    for (int i = 0; i < n; i++)
    {
        string output = "";
        for (int j = 0; j < n; j++)
        {
            output.push_back(board[i][j]);
        }
        tempAns.push_back(output);
    }
    ans.push_back(tempAns);
}
bool isSafe(int row, int col, vector<vector<char>> &board)
{
    if (rowCheck[row] == true)
    {
        return false;
    }
    if (diaUp[row - col] == true)
    {
        return false;
    }
    if (diaDown[row + col] == true)
    {
        return false;
    }
    return true;
}
void solve(int n, vector<vector<string>> &ans, vector<vector<char>> &board,
           int col)
{
    if (col >= n)
    {
        storeSolution(n, ans, board);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board))
        {
            board[row][col] = 'Q';
            rowCheck[row] = true;
            diaUp[row - col] = true;
            diaDown[row + col] = true;
            solve(n, ans, board, col + 1);
            board[row][col] = '.';
            rowCheck[row] = false;
            diaUp[row - col] = false;
            diaDown[row + col] = false;
        }
    }
}
vector<vector<string>> solveNQueens(int n)
{
    vector<vector<string>> ans;
    vector<vector<char>> board(n, vector<char>(n, '.'));
    int col = 0;
    solve(n, ans, board, 0);
    return ans;
}

int main()
{
    vector<vector<string>> ans = solveNQueens(4);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << endl;
        }
        cout << endl;
        cout << endl;
    }
    return 0;
}