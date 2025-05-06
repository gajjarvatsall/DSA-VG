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
    head = insertNodeAtHead(134, head, tail);
    head = insertNodeAtHead(130, head, tail);
    head = insertNodeAtHead(65, head, tail);
    head = insertNodeAtHead(89, head, tail);
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == 65)
        {
            cout << "Founded !!!" << endl;
        }
        else
        {
            cout << "Not Found !!!" << endl;
        }
        temp = temp->next;
    }

    return 0;
}