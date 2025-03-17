#include <bits/stdc++.h>
using namespace std;

void printing(int n)
{
    if (n == 0)
    {
        return;
    }
    printing(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cout << "Enter the value of N :- ";
    cin >> n;
    printing(n);
    cout << endl;
    return 0;
}