#include<bits/stdc++.h>
using namespace std;

int getQuoteint(int divident,int divisor){
    int s = 0;
    int e = divident;

    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(divisor*mid == divident){
            ans = mid;
        }
        if(divisor*mid <= divident){
            ans = mid;
            s = mid + 1;
        }else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int divident = 10;
    int divisor = -2;

    int ans = getQuoteint(abs(divident),abs(divisor));

    if((divident < 0 && divisor > 0) || (divident > 0 && divisor < 0)){
        ans = 0-ans;
    }

    cout<<"Divident :- "<<divident<<endl;
    cout<<"Divisior :- "<<divisor<<endl;
    cout<<"Ans :- "<<ans<<endl;
    
    return 0;
}