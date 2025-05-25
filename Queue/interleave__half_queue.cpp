#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    queue<int> rearrangeQueue(queue<int> q1)
    {
        // code here
        queue<int> q2;
        int half = q1.size() / 2;
        while (half)
        {
            q2.push(q1.front());
            q1.pop();
            half--;
        }
        int size = q1.size();
        while (size)
        {
            q1.push(q2.front());
            q2.pop();
            int ele = q1.front();
            q1.push(ele);
            q1.pop();
            size--;
        }
        return q1;
    }
};
int main()
{

    return 0;
}