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
    int getMax(TreeNode *root)
    {
        if (root == NULL)
        {
            return -1;
        }
        while (root->right)
        {
            root = root->right;
        }
        return root->val;
    }
    TreeNode *deleteNode(TreeNode *root, int key)
    {
        if (root == NULL)
            return NULL;

        if (root->val == key)
        {

            // condition 1 -- no child
            if (root->left == NULL && root->right == NULL)
            {
                delete root;
                return NULL;
            }

            // condition 2 -- left child exists
            if (root->left != NULL && root->right == NULL)
            {
                TreeNode *leftChild = root->left;
                root->left = NULL;
                delete root;
                return leftChild;
            }

            // condition 3 -- right child exists
            if (root->left == NULL && root->right != NULL)
            {
                TreeNode *rightChild = root->right;
                root->right = NULL;
                delete root;
                return rightChild;
            }

            // condition 4 -- both chid exists
            if (root->left != NULL && root->right != NULL)
            {
                int newVal = getMax(root->left);
                root->val = newVal;
                root->left = deleteNode(root->left, newVal);
                return root;
            }
        }
        else
        {
            if (key < root->val)
            {
                root->left = deleteNode(root->left, key);
            }
            else
            {
                root->right = deleteNode(root->right, key);
            }
        }
        return root;
    }
};
int main()
{

    return 0;
}