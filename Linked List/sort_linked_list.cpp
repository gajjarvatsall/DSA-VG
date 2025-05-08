//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}


// } Driver Code Ends

/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    void toadd(Node* &toMove,Node* &head,Node* &tail){
        if(head == NULL & tail == NULL){
            head = toMove;
            tail = toMove;
        }else{
            tail->next = toMove;
            tail = toMove;
        }
        
    }
    
    Node* segregate(Node* head) {
        // code here
        Node* zeroHead = NULL;
        Node* zeroTail = NULL;
        
        Node* oneHead = NULL;
        Node* oneTail = NULL;
        
        Node* twoHead = NULL;
        Node* twoTail = NULL;
        
        Node* temp = head;
        
        while(temp != NULL){
            
            Node* toMove = temp;
            temp = temp->next;
            toMove->next = NULL;
            
            if(toMove->data == 0){
                toadd(toMove,zeroHead,zeroTail);
            }
            
            if(toMove->data == 1){
                toadd(toMove,oneHead,oneTail);
            }
            
            if(toMove->data == 2){
                toadd(toMove,twoHead,twoTail);
            }
        }
        
        if(zeroHead != NULL){
            if(oneHead != NULL){
                zeroTail->next = oneHead;
                oneTail->next = twoHead;
            }else{
                    zeroTail->next = twoHead;
            }
            return zeroHead;
        }else{
            if(oneHead != NULL){
                oneTail->next = twoHead;
                return oneHead;
            }else{
                return twoHead;
        }
    }
    }
};



//{ Driver Code Starts.

// Driver program to test above functions
int main() {
    int t, k;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        Node *head = nullptr, *tail = nullptr;
        int x;

        if (ss >> x) {
            head = new Node(x);
            tail = head;

            while (ss >> x) {
                tail->next = new Node(x);
                tail = tail->next;
            }

            // Link the last node to the head if k is 1 to make it circular
            if (k == 1) {
                tail->next = head;
            }
        }

        Solution ob;
        Node* newHead = ob.segregate(head);
        printList(newHead);
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends