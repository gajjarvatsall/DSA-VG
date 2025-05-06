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

int totalLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
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
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    return head;
}

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

Node *insertNodeAtNPos(int data, int pos, Node *&head, Node *&tail)
{
    int len = totalLength(head);
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
        Node *newNode = new Node(data);
        Node *temp = head;
        for (int i = 0; i < pos - 2; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
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
    head = insertNodeAtNPos(80, 3, head, tail);
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->prev != NULL)
            cout << "Prev Data: " << temp->prev->data;
        else
            cout << "Prev Data: NULL";

        cout << " | Data: " << temp->data << " | ";

        if (temp->next != NULL)
            cout << "Next Data: " << temp->next->data;
        else
            cout << "Next Data: NULL";

        cout << endl;
        temp = temp->next;
    }

    cout << "Total length :- " << totalLength(head) << endl;
    return 0;
}