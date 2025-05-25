#include <bits/stdc++.h>
using namespace std;
class DecircularQueue
{
private:
    int n;
    int *arr;
    int front;
    int rear;

public:
    DecircularQueue(int size)
    {
        this->n = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void pushBack(int data)
    {
        if ((front == 0 && rear == n - 1) || (rear == front - 1))
        {
            cout << "Overflow" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            rear++;
            arr[rear] = data;
            front++;
        }
        else if (rear == n - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pushFront(int data)
    {
        if ((front == 0 && rear == n - 1) || (rear == front - 1))
        {
            cout << "Overflow" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            front = rear = 0;
            arr[front] = data;
        }
        else if (front == 0 && rear != n - 1)
        {
            front = n - 1;
            arr[front] = data;
        }
        else
        {
            front--;
            arr[front] = data;
        }
    }

    void popBack()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Underflow" << endl;
        }
        else if (front == rear)
        {
            arr[rear] = -1;
            front = rear = -1;
        }
        else if (rear == 0)
        {
            arr[rear] = -1;
            rear = n - 1;
        }
        else
        {
            arr[rear] = -1;
            rear--;
        }
    }

    void popFront()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Underflow" << endl;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = rear = -1;
        }
        else if (front == n - 1)
        {
            arr[front] = -1;
            front = 0;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }
};
int main()
{

    return 0;
}