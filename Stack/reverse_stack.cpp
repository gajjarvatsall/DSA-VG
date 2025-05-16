#include <bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &s,int value)
{
    if (s.empty())
    {
        s.push(value);
        return;
    }

    int temp = s.top();
    s.pop();

    insertAtBottom(s,value);

    s.push(temp);
}
void reverseStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int temp = s.top();
    s.pop();

    reverseStack(s);

    insertAtBottom(s,temp);
}
void print(stack<int> s){
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(20);
    s.push(40);
    s.push(50);
    s.push(60);


    reverseStack(s);

    print(s);

    return 0;
}