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
    head = insertNodeAtTail(30, head, tail);
    head = insertNodeAtTail(50, head, tail);

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " - > ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

    return 0;
}