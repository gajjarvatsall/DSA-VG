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

Node *insertNodeAtHead(int data, Node *&head, Node *&tail)
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
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    return head;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    head = insertNodeAtHead(10, head, tail);
    head = insertNodeAtHead(23, head, tail);
    head = insertNodeAtHead(25, head, tail);

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

    cout << "NULL" << endl;
    return 0;
}