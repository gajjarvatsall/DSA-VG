#include <bits/stdc++.h>
using namespace std;

int getLength(char charr[])
{
    int c = 0;
    int i = 0;
    while (charr[i] != '\0')
    {
        c++;
        i++;
    }
    return c;
}

void toUpperCase(char charr[])
{
    int n = getLength(charr);
    for (int i = 0; i < n; i++)
    {
        if (charr[i] >= 'a' && charr[i] <= 'z')
        {
            charr[i] = charr[i] - 'a' + 'A';
        }
    }
}
void toLowerCase(char charr[])
{
    int n = getLength(charr);
    for (int i = 0; i < n; i++)
    {
        if (charr[i] >= 'A' && charr[i] <= 'Z')
        {
            charr[i] = charr[i] - 'A' + 'a';
        }
    }
}
void reverseChar(char charr[])
{
    int i = 0;
    int j = getLength(charr) - 1;
    while (i <= j)
    {
        swap(charr[i], charr[j]);
        i++;
        j--;
    }
}
bool isPallindrom(char charr[])
{
    bool ans = false;
    int i = 0;
    int j = getLength(charr) - 1;
    while (i <= j)
    {
        if (charr[i] == charr[j])
        {
            i++;
            j--;
            ans = true;
        }else{
            ans = false;
            break;
        }
    }
    return ans;
}

int main()
{
    char charr[100];

    cout << "Enter you name :- ";

    // cin>>charr;

    cin.getline(charr, 100);
    toUpperCase(charr);
    toLowerCase(charr);
    reverseChar(charr);
    bool ans = isPallindrom(charr);

    cout << "Your name is " << charr << endl;
    cout<<"Is it pallindrome ?? "<<ans<<endl;
    return 0;
}