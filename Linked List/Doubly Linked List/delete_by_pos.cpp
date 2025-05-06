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

int getPos(int data, Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (data == temp->data)
        {
            break;
        }
        temp = temp->next;
        len++;
    }
    return len;
}

Node *deleteAtPos(int data, Node *&head, Node *&tail)
{
    int pos = getPos(data, head);
    if (head == NULL && tail == NULL)
    {
        cout << "No deletion can be done !!!" << endl;
    }
    else if (head == tail)
    {
        Node *temp = head;
        head = NULL;
        tail = NULL;
        temp->next = NULL;
        temp->prev = NULL;
        delete temp;
    }
    else
    {
        if (pos == 0)
        {
            Node *temp = head;
            head = temp->next;
            temp->next->prev = NULL;
            temp->next = NULL;
            delete temp;
        }
        else
        {
            Node *temp = head;
            for (int i = 0; i < pos; i++)
            {
                temp = temp->next;
            }
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            temp->prev = NULL;
            temp->next = NULL;
            delete temp;
        }
    }
    return head;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    head = insertNodeAtTail(10, head, tail);
    head = insertNodeAtTail(134, head, tail);
    head = insertNodeAtTail(130, head, tail);
    head = insertNodeAtTail(65, head, tail);
    head = insertNodeAtTail(89, head, tail);
    Node *temp = head;
    cout << "Before Delete :- " << endl;
    while (temp != NULL)
    {
        cout << temp->data << " - > ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    head = deleteAtPos(65, head, tail);
    cout << endl;

    temp = head;
    cout << "After Delete :- " << endl;
    while (temp != NULL)
    {
        cout << temp->data << " - > ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}