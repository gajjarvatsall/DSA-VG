#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> result;
        if (root == nullptr)
            return result;

        queue<TreeNode *> q;
        q.push(root);
        bool reverseOrder = false;

        while (!q.empty())
        {
            int size = q.size();
            vector<int> levels;

            for (int i = 0; i < size; i++)
            {
                TreeNode *front = q.front();
                q.pop();
                levels.push_back(front->val);

                if (front->left)
                    q.push(front->left);
                if (front->right)
                    q.push(front->right);
            }

            if (reverseOrder)
            {
                reverse(levels.begin(), levels.end());
            }

            result.push_back(levels);
            levels.clear();
            reverseOrder = !reverseOrder;
        }
        return result;
    }
};
int main()
{

    return 0;
}