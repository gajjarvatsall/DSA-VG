// 8
// https://leetcode.com/problems/string-to-integer-atoi/description/

#include<bits/stdc++.h>
using namespace std;

int myAtoi(string s) {
    int i = 0, n = s.size();
    long ans = 0;  // Use `long` to handle overflow
    bool neg = false;

    // Step 1: Ignore leading whitespaces
    while (i < n && s[i] == ' ') i++;

    // Step 2: Check sign
    if (i < n && (s[i] == '+' || s[i] == '-')) {
        if (s[i] == '-') neg = true;
        i++; // Move to next character
    }

    // Step 3: Read digits and stop at non-digit
    while (i < n && isdigit(s[i])) {
        ans = ans * 10 + (s[i] - '0');  // Convert char to int
        
        // Step 4: Clamp to INT_MIN or INT_MAX on overflow
        if (ans > INT_MAX) {
            return neg ? INT_MIN : INT_MAX;
        }
        i++;
    }

    return neg ? -ans : ans;
}


int main()
{
    
    return 0;
}