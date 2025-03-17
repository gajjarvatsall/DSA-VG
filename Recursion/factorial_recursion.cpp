#include <bits/stdc++.h>
using namespace std;

int factorialN(int n)
{
    // Base Case
    if (n == 0)
        return 1;

    // Recursive Call
    int finalAns = n * factorialN(n - 1);
    // Processing
    return finalAns;
}
int main()
{
    int n;
    cout << "Enter the Value of N :- ";
    cin >> n;
    int ans = factorialN(n);

    cout << "Factorial of " << n << " is :- " << ans << endl;
    return 0;
}