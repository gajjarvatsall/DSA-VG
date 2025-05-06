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
Node *deleteNodeAtPosition(int pos, Node *&head, Node *&tail)
{
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
        delete temp;
    }
    else
    {
        if (pos == 1)
        {
            Node *temp = head;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }
        else
        {
            Node *temp = head;
            for (int i = 0; i < pos - 2; i++)
            {
                temp = temp->next;
            }
            Node *nodeToDelete = temp->next;
            temp->next = nodeToDelete->next;
            nodeToDelete->next = NULL;
            delete nodeToDelete;
        }
    }
    return head;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    head = insertNodeAtHead(10, head, tail);
    head = insertNodeAtHead(134, head, tail);
    head = insertNodeAtHead(130, head, tail);
    head = insertNodeAtHead(65, head, tail);
    head = insertNodeAtHead(89, head, tail);
    Node *temp = head;
    cout << "Before Delete :- " << endl;
    while (temp != NULL)
    {
        cout << temp->data << " - > ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    head = deleteNodeAtPosition(5, head, tail);
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