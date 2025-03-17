#include<bits/stdc++.h>
using namespace std;
void recPrintOdd(vector<int> &arr,int size,int i){
    if(i == size){
        return;
    }
    if(arr[i] % 2 != 0){
        cout<<arr[i]<<" ";
    }
    recPrintOdd(arr,size,i+1);
}
int main()
{
    vector<int> arr = {34,6,56,3,45,67,76,3};
    recPrintOdd(arr,arr.size(),0);
    return 0;
}