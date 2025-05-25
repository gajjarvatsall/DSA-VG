#include <bits/stdc++.h>
using namespace std;
class CircularQueue
{
private:
    int n;
    int *arr;
    int front;
    int rear;

public:
    CircularQueue(int size)
    {
        this->n = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data)
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

    void pop()
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
    int getSize()
    {
        if (front == -1)
            return 0;
        if (rear >= front)
            return rear - front + 1;
        return n - front + rear + 1;
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

    int getFront()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }
    void print()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return;
        }
        int i = front;
        while (true)
        {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % n;
        }
        cout << endl;
    }
};
int main()
{
    CircularQueue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(63); // Should show Overflow

    q.print(); // 10 20 30 40

    q.pop();
    q.pop();
    
    q.print(); // 30 40
    
    q.push(60);
    q.push(70); // Wrap around should work
    q.pop();
    
    q.push(11);
    q.print(); // 30 40 60 70

    cout << "Front: " << q.getFront() << endl;
    cout << "Size: " << q.getSize() << endl;
    cout << "Empty: " << q.isEmpty() << endl;

    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop(); // Underflow

    q.print(); // Queue is empty

    return 0;
}
