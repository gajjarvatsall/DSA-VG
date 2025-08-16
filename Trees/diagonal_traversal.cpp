#include <bits/stdc++.h>
using namespace std;
/* A binary tree node */
struct Node
{
    int data;
    Node *left, *right;
};

class Solution
{
public:
    vector<int> diagonal(Node *root)
    {
        // code here
        vector<int> ans;
        queue<Node *> q;

        q.push(root);

        while (!q.empty())
        {
            Node *first = q.front();
            q.pop();
            while (first)
            {
                ans.push_back(first->data);
                if (first->left)
                {
                    q.push(first->left);
                }
                first = first->right;
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}