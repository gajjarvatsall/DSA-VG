#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

Node *insertNodeAtTail(int data, Node *&head, Node *&tail)
{
    if (head == NULL && tail == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    return head;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    head = insertNodeAtTail(10, head, tail);
    head = insertNodeAtTail(23, head, tail);
    head = insertNodeAtTail(25, head, tail);

    Node *temp = head;

    while (temp != NULL)
    {
        cout << "Data: " << temp->data << " | ";
        if (temp->next != NULL)
            cout << "Next Data: " << temp->next->data;
        else
            cout << "Next Data: NULL";
        cout << endl;
        temp = temp->next;
    }

    return 0;
}