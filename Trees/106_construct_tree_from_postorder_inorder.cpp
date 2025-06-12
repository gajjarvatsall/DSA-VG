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
    void compareMap(unordered_map<int, int> &umap, vector<int> inorder)
    {
        for (int i = 0; i < inorder.size(); i++)
        {
            umap[inorder[i]] = i;
        }
    }
    TreeNode *solve(unordered_map<int, int> &umap, vector<int> &postorder,
                    vector<int> &inorder, int &posIndex, int startIndex,
                    int endIndex, int size)
    {
        if (posIndex < 0)
        {
            return NULL;
        }
        if (startIndex > endIndex)
        {
            return NULL;
        }

        int ele = postorder[posIndex];
        posIndex--;
        TreeNode *root = new TreeNode(ele);

        int midIndex = umap[ele];

        root->right = solve(umap, postorder, inorder, posIndex, midIndex + 1,
                            endIndex, size);
        root->left = solve(umap, postorder, inorder, posIndex, startIndex,
                           midIndex - 1, size);

        return root;
    }
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        int posIndex = postorder.size() - 1;
        int startIndex = 0;
        int endIndex = inorder.size() - 1;
        int size = inorder.size();
        unordered_map<int, int> umap;
        compareMap(umap, inorder);
        return solve(umap, postorder, inorder, posIndex, startIndex, endIndex,
                     size);
    }
};
int main()
{

    return 0;
}