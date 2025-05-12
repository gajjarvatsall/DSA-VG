#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

    Stack(int capacity)
    {
        arr = new int[capacity];
        this->size = capacity;
        this->top = -1;
    }

    void push(int val)
    {
        if (top == size - 1)
        {
            cout << "Stack is overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }

    void pop()
    {
        if (top < 0)
        {
            cout << "Stack is underflow" << endl;
        }
        else
        {
            arr[top] = -1;
            top--;
        }
    }

    void getTop()
    {
        cout << "Top :- " << arr[top] << endl;
    }

    void getSize()
    {
        cout << "Size :- " << top + 1 << endl;
    }

    bool isEmpty()
    {
        if (top < 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s(5);
    s.push(3);
    s.push(4);
    s.push(56);

    s.print();

    s.getTop();

    s.getSize();

    s.pop();

    s.print();

    cout<<s.isEmpty()<<endl;

    return 0;
}