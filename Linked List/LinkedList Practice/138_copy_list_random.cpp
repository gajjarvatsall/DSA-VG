#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *random;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->random = NULL;
    }
};
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr) return nullptr;

        Node* copyList = new Node(head->val);
        Node* it = head->next;
        Node* c = copyList;
        while (it) {
            Node* newNode = new Node(it->val);
            c->next = newNode;
            c = c->next;
            it = it->next;
        }

        c = copyList;
        it = head;
        while (it) {
            if (it->random == nullptr) {
                c->random = nullptr;
            } else {
                Node* temp1 = head;
                Node* temp2 = copyList;
                while (temp1 != it->random) {
                    temp1 = temp1->next;
                    temp2 = temp2->next;
                }
                c->random = temp2;
            }
            it = it->next;
            c = c->next;
        }
        return copyList;
    }
};

int main()
{
    
    return 0;
}