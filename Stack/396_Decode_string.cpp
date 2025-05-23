#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string decodeString(string s) {
        stack<int> countStack;
        stack<string> stringStack;
        string currentStr = "";
        int k = 0;

        for (int i = 0; i < s.length(); i++) {
            // If the character is a digit, build the full number
            if (isdigit(s[i])) {
                k = 0;
                while (i < s.length() && isdigit(s[i])) {
                    k = k * 10 + (s[i] - '0');
                    i++;
                }
                i--; // Step back because the for loop will increment it
            } 
            // If '[': push current string and repeat count, then reset
            else if (s[i] == '[') {
                countStack.push(k);
                stringStack.push(currentStr);
                currentStr = "";
                k = 0;
            } 
            // If ']': pop and build the repeated string
            else if (s[i] == ']') {
                string decodedStr = stringStack.top(); stringStack.pop();
                int repeatTimes = countStack.top(); countStack.pop();
                for (int j = 0; j < repeatTimes; j++) {
                    decodedStr += currentStr;
                }
                currentStr = decodedStr;
            } 
            // Normal characters, just append
            else {
                currentStr += s[i];
            }
        }

        return currentStr;
    }
};

int main()
{
    
    return 0;
}