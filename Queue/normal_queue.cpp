#include <bits/stdc++.h>
using namespace std;
class Queue
{
private:
    int *arr;
    int n;
    int front;
    int rear;

public:
    Queue(int size)
    {
        arr = new int[size];
        n = size;
        front = -1;
        rear = -1;
    }

    void push(int data)
    {
        if (rear == n - 1)
        {
            cout << "Queue is Overflow" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            rear++;
            arr[rear] = data;
            front++;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }
    void pop()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue is Underflow" << endl;
        }
        else if (front == rear)
        {
            arr[rear] = -1;
            front = rear = -1;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }
    int getFront()
    {
        if (front == -1)
        {
            cout << "Queue is Underflow" << endl;
            return -1;
        }
        return arr[front];
    }

    int getBack()
    {
        if (front == -1)
        {
            cout << "Queue is Underflow" << endl;
            return -1;
        }
        return arr[rear];
    }
    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int getSize()
    {
        if (front == -1 && rear == -1)
        {
            return 0;
        }
        else
        {
            return rear - front + 1;
        }
    }
    void print()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return;
        }
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.print(); // 10 20 30

    cout << "Front: " << q.getFront() << endl; // 10
    cout << "Back: " << q.getBack() << endl;   // 30
    cout << "Size: " << q.getSize() << endl;   // 3

    q.pop();
    q.print(); // 20 30

    q.pop();
    q.pop();
    q.pop(); // Underflow

    q.push(40);
    q.print(); // 40

    cout << "Is Empty: " << (q.isEmpty() ? "Yes" : "No") << endl; // No
    return 0;
}