#include <bits/stdc++.h>
using namespace std;
void printDigits(int n)
{
    if (n == 0)
    {
        return;
    }
    printDigits(n / 10);
    cout << n % 10 << endl;
}
int main()
{
    int n;
    cout << "Enter the value of N :- ";
    cin >> n;
    printDigits(n);
    return 0;
}