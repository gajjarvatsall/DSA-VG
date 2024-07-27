// 73. Set Matrix Zeroes

// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
// You must do it in place.

// Solved using brutforce method 
// TC :- O(m*n)
// SC :- O(m*n)


#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        unordered_map<int, pair<int, int>> loc;
        int c = 0;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    loc[c] = make_pair(i, j);
                    c++;
                }
            }
        }

        for (const auto &[key, value] : loc)
        {
            int I = value.first;
            int J = value.second;

            for (int j = 0; j < matrix[0].size(); j++)
            {
                matrix[I][j] = 0;
            }

            for (int i = 0; i < matrix.size(); i++)
            {
                matrix[i][J] = 0;
            }
        }
    }
};

int main()
{

    return 0;
}