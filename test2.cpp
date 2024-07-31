#include <bits/stdc++.h>
using namespace std;

int nonSpecialCount(int l, int r)
{
    int ans = 0;
    int count = 0;
    int test = 0;
    int maa = 0;
    for (int i = l; i <= r; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
            if (count == 2)
            {
                test++;
                cout<<"i = "<<i<<" ---> "<<test<<endl;
                count = 0;
                break;
            }
        }
        maa++;
        
       
    }

    return maa - test;
}

int main()
{
    int ans = nonSpecialCount(4, 16);
    cout << "Ans :- " << ans << endl;
    return 0;
}