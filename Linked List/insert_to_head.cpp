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

Node *insertNodeAtHead(int data, Node *&head, Node *&tail)
{
    if (head == NULL && tail == NULL)
    {
        // List is Empty
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // List is not Empty
        Node *newNode = new Node(data);
        newNode->next = head;
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
        cout << temp->data << " - > ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return 0;
}