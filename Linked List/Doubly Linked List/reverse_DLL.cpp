#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
    Node *prev;
    Node(int x) : val(x), next(NULL), prev(NULL) {}
};

Node *reverseItr(Node *head)
{
    Node *temp = nullptr;
    Node *curr = head;

    while (curr != nullptr)
    {
        swap(curr->next, curr->prev);
        temp = curr;
        curr = curr->prev; // originally next
    }

    return temp;
}


// Recursive function to reverse a doubly linked list
Node *reverseRec(Node *curr) { 
  
    // Base case: if the list is empty or we
  	// reach the end of the list
    if (curr == nullptr)
        return nullptr;

    // Swap the next and prev pointers
    swap(curr->prev, curr->next);

    // If the previous node (after swap) is null,
  	// this is the new head
    if (curr->prev == nullptr)
        return curr;

    // Recurse for the next node
    return reverseRec(curr->prev);
}

int main()
{

    return 0;
}