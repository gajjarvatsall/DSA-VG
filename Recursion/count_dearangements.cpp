#include <bits/stdc++.h>
using namespace std;
int countDearangements(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    return (n - 1) * (countDearangements(n - 1) + countDearangements(n - 2));
}
int main()
{
    int n = 4;
    cout << countDearangements(n) << endl;
    return 0;
}