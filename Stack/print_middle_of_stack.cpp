#include <bits/stdc++.h>
using namespace std;
void printMiddle(stack<int> &s, int count)
{

    if (count == 0)
    {
        cout << s.top() << endl;
        return;
    }
    int temp = s.top();
    s.pop();
    count--;
    printMiddle(s, count);
    s.push(temp);
}
int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    int count = (s.size() - 1) / 2;
    printMiddle(s, count);

    return 0;
}