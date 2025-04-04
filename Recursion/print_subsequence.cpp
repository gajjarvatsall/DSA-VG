#include <bits/stdc++.h>
using namespace std;
void printSubSequence(string str, string output, int index)
{
    if (index == str.length())
    {
        cout << output << endl;
        return;
    }
    printSubSequence(str, output + str[index], index + 1);
    printSubSequence(str, output, index + 1); 
}
int main() 
{
    string str = "abc";
    string output = "";
    int index = 0;
    printSubSequence(str, output, index);
    return 0;
}