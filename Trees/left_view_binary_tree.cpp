#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

class Solution
{
public:
    void solve(Node *root, int level, vector<int> &ans)
    {
        if (root == NULL)
        {
            return;
        }
        if (level == ans.size())
        {
            ans.push_back(root->data);
        }
        level++;
        solve(root->left, level, ans);
        solve(root->right, level, ans);
    }
    vector<int> leftView(Node *root)
    {
        // code here
        vector<int> ans;
        solve(root, 0, ans);
        return ans;
    }
};
int main()

{

    return 0;
}