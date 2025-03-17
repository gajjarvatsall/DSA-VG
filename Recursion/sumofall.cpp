#include <bits/stdc++.h>
using namespace std;
int sumOfAll(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return n + sumOfAll(n - 1);
}
int main()
{
    int n;
    cout << "Enter the value of N :- ";
    cin >> n;

    int ans = sumOfAll(n);
    cout << "The sum of all is " << ans << endl;
    return 0;
}