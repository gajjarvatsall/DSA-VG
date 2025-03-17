#include<bits/stdc++.h>
using namespace std;
void recPrintEven(vector<int> &arr,int size,int i,vector<int> &ans){
    if(i == size){
        return;
    }
    if(arr[i] % 2 == 0){
        ans.push_back(arr[i]);
    }
    recPrintEven(arr,size,i+1,ans);
}
int main()
{
    vector<int> arr = {34,6,56,3,45,67,76,3};
    vector<int> ans;
    recPrintEven(arr,arr.size(),0,ans);
    for(auto i : ans){
        cout<<i<<" ";
    }
    return 0;
}