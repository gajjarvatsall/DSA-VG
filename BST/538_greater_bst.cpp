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
    void storeInorder(TreeNode *root, vector<int> &inorder)
    {
        if (root == NULL)
            return;

        storeInorder(root->left, inorder);
        inorder.push_back(root->val);
        storeInorder(root->right, inorder);
    }
    void updateTree(TreeNode *&root, vector<int> inorder, int &index)
    {
        if (root == NULL)
            return;

        updateTree(root->left, inorder, index);
        root->val = inorder[index];
        index++;
        updateTree(root->right, inorder, index);
    }
    TreeNode *bstToGst(TreeNode *root)
    {
        if (root == NULL)
            return NULL;

        vector<int> inorder;
        storeInorder(root, inorder);

        int n = inorder.size();

        for (int i = n - 1; i >= 0; i--)
        {
            int curr = inorder[i];
            int nex = 0;
            if (i + 1 < n)
            {
                nex = inorder[i + 1];
            }
            int sum = nex + curr;
            inorder[i] = sum;
        }

        int index = 0;
        updateTree(root, inorder, index);
        return root;
    }
};
int main()
{

    return 0;
}