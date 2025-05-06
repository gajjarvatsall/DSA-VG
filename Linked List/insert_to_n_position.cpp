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

int getLength(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

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

Node *insertNodeAtNPosition(int data, int pos, Node *&head, Node *&tail)
{
    int len = getLength(head);
    if (pos == 1)
    {
        head = insertNodeAtHead(data, head, tail);
    }
    else if (pos == len + 1)
    {
        head = insertNodeAtTail(data, head, tail);
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < pos - 2; i++)
        {
            temp = temp->next;
        }
        Node *newNode = new Node(data);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    head = insertNodeAtTail(20, head, tail);
    head = insertNodeAtTail(40, head, tail);
    head = insertNodeAtTail(60, head, tail);
    head = insertNodeAtTail(70, head, tail);
    head = insertNodeAtTail(90, head, tail);
    head = insertNodeAtNPosition(80, 3, head, tail);
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " - > ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return 0;
}