#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int capacity)
    {
        arr = new int[capacity];
        this->size = capacity;
        this->top1 = -1;
        this->top2 = size;
    }

    void push1(int val)
    {
        if (top2 - top1 == 1)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top1++;
            arr[top1] = val;
        }
    }
    void pop1()
    {
        if (top1 < 0)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            arr[top1] = 0;
            top1--;
        }
    }

    void push2(int val)
    {
        if (top2 - top1 == 1)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top2--;
            arr[top2] = val;
        }
    }
    void pop2()
    {
        if (top2 >= size)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            arr[top2] = 0;
            top2++;
        }
    }

    void getTop1()
    {
        cout << top1 << " - > " << arr[top1] << endl;
    }
    void getTop2()
    {
        cout << top2 << " - > " << arr[top2] << endl;
    }

    void getSize()
    {
        cout << "Size :- " << (size - top2) + top1 + 1 << endl;
    }

    bool isEmpty()
    {
        if (top2 >= size && top1 < 0)
        {
            return true;
        }
        return false;
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
    s.push1(34);
    s.push2(68);
    s.push2(68);
    s.push2(68);

    s.getSize();

    s.getTop1();
    s.getTop2();

    s.print();

    cout << s.isEmpty() << endl;

    return 0;
}