#include <bits/stdc++.h>
using namespace std;
/* Structure for tree and linked list
*/
class Node {
  public:
    int data; 
    Node* left;
    Node* right;

    Node()
        : data(0)
        , left(NULL)
        , right(NULL) {}

    Node(int x)
        : data(x)
        , left(NULL)
        , right(NULL) {}
};


// This function should return head to the DLL
class Solution {
  public:
    void solve(Node* root, Node* &head, Node* &tail){
        if(root == NULL) {
            return;
        }
        
        solve(root->left,head,tail);
        
        if(tail != NULL){
            tail->right = root;
            root->left = tail;
            tail = root;
        }else{
            head = root;
            tail = root;
        }
        
        solve(root->right,head,tail);
    }
    Node* bToDLL(Node* root) {
        // code here
        Node* head = NULL;
        Node* tail = NULL;
        solve(root,head,tail);
        return head;
    }
};
int main()
{

    return 0;
}