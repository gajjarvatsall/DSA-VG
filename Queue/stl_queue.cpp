#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Normal Queue :------- "<<endl;
    queue<int> qt;
    qt.push(10);
    qt.push(20);
    qt.push(30);
    qt.push(40);

    cout<<"Printing the front :- "<<qt.front()<<endl;
    cout<<"Printing the back :- "<<qt.back()<<endl;

    cout<<"Printing the whole queue :- "<<endl;
    while (!qt.empty())
    {       
        cout<<qt.front()<<" ";
        qt.pop();
    }
    cout<<endl;
    cout<<endl;

    cout<<"Deque :------- "<<endl;
    deque<int> dt;
    dt.push_front(10);
    dt.push_front(20);
    dt.push_front(40);
    dt.push_back(60);
    dt.push_back(80);
    dt.push_back(90);

    cout<<"Printing the front :- "<<dt.front()<<endl;
    cout<<"Printing the back :- "<<dt.back()<<endl;

    cout<<"Printing the whole queue :- "<<endl;
    while (!dt.empty())
    {       
        cout<<dt.back()<<" ";
        dt.pop_back();
    }
    cout<<endl;
    
    return 0;
}