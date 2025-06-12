#include <bits/stdc++.h>
using namespace std;

// Tree Node
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // Constructor to initialize a new node
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    void LeftBoundary(Node *root, vector<int> &ans)
    {
        if (root == NULL)
        {
            return;
        }
        if (root->left == NULL && root->right == NULL)
        {
            return;
        }
        ans.push_back(root->data);
        if (root->left != NULL)
        {
            LeftBoundary(root->left, ans);
        }
        else
        {
            LeftBoundary(root->right, ans);
        }
    }
    void RightBoundary(Node *root, vector<int> &ans)
    {
        if (root == NULL)
        {
            return;
        }
        if (root->left == NULL && root->right == NULL)
        {
            return;
        }

        if (root->right != NULL)
        {
            RightBoundary(root->right, ans);
        }
        else
        {
            RightBoundary(root->left, ans);
        }
        ans.push_back(root->data);
    }
    void LeafBoundary(Node *root, vector<int> &ans)
    {
        if (root == NULL)
        {
            return;
        }
        if (root->left == NULL && root->right == NULL)
        {
            ans.push_back(root->data);
        }

        LeafBoundary(root->left, ans);
        LeafBoundary(root->right, ans);
    }
    vector<int> boundaryTraversal(Node *root)
    {
        // code here
        vector<int> ans;

        if (root == NULL)
        {
            return ans;
        }

        ans.push_back(root->data);
        LeftBoundary(root->left, ans);
        LeafBoundary(root->left, ans);
        LeafBoundary(root->right, ans);
        RightBoundary(root->right, ans);
        return ans;
    }
};
int main()
{

    return 0;
}