#include <bits/stdc++.h>
using namespace std;

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
    int getInt(vector<int> inorder, int target)
    {
        for (int i = 0; i < inorder.size(); i++)
        {
            if (inorder[i] == target)
            {
                return i;
            }
        }
        return -1;
    }
    TreeNode *solve(unordered_map<int, int> &umap, vector<int> &preorder,
                    vector<int> &inorder, int &preIndex, int startIndex,
                    int endIndex, int size)
    {
        if (preIndex >= size)
        {
            return NULL;
        }
        if (startIndex > endIndex)
        {
            return NULL;
        }

        int ele = preorder[preIndex];
        preIndex++;
        TreeNode *root = new TreeNode(ele);

        // int midIndex = getInt(inorder, ele);
        int midIndex = umap[ele];

        root->left = solve(umap, preorder, inorder, preIndex, startIndex,
                           midIndex - 1, size);
        root->right = solve(umap, preorder, inorder, preIndex, midIndex + 1,
                            endIndex, size);

        return root;
    }
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        int preIndex = 0;
        int startIndex = 0;
        int endIndex = inorder.size() - 1;
        int size = inorder.size();
        unordered_map<int, int> umap;
        compareMap(umap, inorder);
        return solve(umap, preorder, inorder, preIndex, startIndex, endIndex,
                     size);
    }
};
int main()
{

    return 0;
}