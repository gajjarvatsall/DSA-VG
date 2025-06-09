#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// TC :- O(n)
Node *createTree()
{
    cout << "Enter a value :- ";
    int val;
    cin >> val;
    Node *root = new Node(val);

    if (val == -1)
    {
        return NULL;
    }

    cout << "Inserting the value to the left of " << val << endl;
    root->left = createTree();
    cout << "Inserting the value to the right of " << val << endl;
    root->right = createTree();

    return root;
}

void inOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrderTraversal(root->left);
    cout << root->val << " ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->val << " ";
}

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

int main()
{
    Node *root = createTree();

    cout << "The root is " << root << endl;

    cout << "Inorder Traversal :- ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Preorder Traversal :- ";
    preOrderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal :- ";
    postOrderTraversal(root);
    cout << endl;

    cout << "Levelorder Traversal :- ";
    levelOrderTraversal(root);
    cout << endl;

    return 0;
}

// 10 20 30 -1 -1 40 -1 -1 50 -1 60 -1 -1