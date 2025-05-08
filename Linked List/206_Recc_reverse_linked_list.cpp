#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *reverseList(Node *prev, Node *curr)
{
    if (curr == NULL)
    {
        return prev;
    }
    Node *forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;
    return reverseList(prev, curr);
}
Node *reverseList(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;

    Node *newHead = reverseList(prev, curr);

    return newHead;
}
int main()
{

    return 0;
}