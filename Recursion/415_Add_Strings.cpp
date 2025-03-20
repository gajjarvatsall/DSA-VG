#include <bits/stdc++.h>
using namespace std;

string solve(string num1, string num2, int n1, int n2, int carry)
{
    // Base case: If both numbers are exhausted, return carry if non-zero
    if (n1 < 0 && n2 < 0)
        return carry ? to_string(carry) : "";

    // Get current digits or use 0 if out of bounds
    int digit1 = (n1 >= 0) ? num1[n1] - '0' : 0;
    int digit2 = (n2 >= 0) ? num2[n2] - '0' : 0;

    // Compute sum and carry
    int sum = digit1 + digit2 + carry;

    // Recursively process next digits, build result from right to left
    return solve(num1, num2, n1 - 1, n2 - 1, sum / 10) + to_string(sum % 10);
}

string addStrings(string num1, string num2)
{
    return solve(num1, num2, num1.length() - 1, num2.length() - 1, 0);
}

int main()
{
    string num1 = "554";
    string num2 = "53";

    cout << addStrings(num1, num2) << endl;
    return 0;
}