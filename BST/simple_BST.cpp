#include <bits/stdc++.h>
using namespace std;

// Tree Node
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    // Constructor to initialize a new node
    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void levelOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> qt;
    qt.push(root);
    qt.push(NULL);

    while (!qt.empty())
    {
        Node *front = qt.front();
        qt.pop();
        if (front == NULL)
        {
            cout << endl;
            if (!qt.empty())
            {
                qt.push(NULL);
            }
        }
        else
        {
            cout << front->val << " ";

            if (front->left != NULL)
            {
                qt.push(front->left);
            }
            if (front->right != NULL)
            {
                qt.push(front->right);
            }
        }
    }
}

// O(logn)
Node *buildBST(int val, Node *&root)
{
    if (root == NULL)
    {
        root = new Node(val);
        return root;
    }
    if (val < root->val)
    {
        root->left = buildBST(val, root->left);
    }
    else
    {
        root->right = buildBST(val, root->right);
    }
    return root;
}

Node *createBST(Node *&root)
{
    int val;
    cout << "Enter the value :- ";
    cin >> val;

    while (val != -1)
    {
        root = buildBST(val, root);
        cout << "Enter the value :- ";
        cin >> val;
    }
    return root;
}

int getMin(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    while (root->left)
    {
        root = root->left;
    }
    return root->val;
}

int getMax(Node *root)
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

bool searchBST(Node *root, int val)
{
    if (root == NULL)
        return false;

    if (root->val == val)
    {
        return true;
    }
    else
    {
        if (val < root->val)
        {
            return searchBST(root->left, val);
        }
        else
        {
            return searchBST(root->right, val);
        }
    }

    return false;
}

int main()
{
    Node *root = NULL;
    createBST(root);
    levelOrderTraversal(root);
    bool ans = searchBST(root, 50);
    cout << "IS found [50] :- " << ans << endl;

    // 100 30 50 20 560 800 900 3420 100
    return 0;
}