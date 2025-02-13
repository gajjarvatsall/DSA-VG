#include<bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> a){
    int s = 0;
    int e = a.size()-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(a[mid] > a[mid+1]){
            return mid;
        }else if(a[mid] < a[mid-1]){
            return mid-1;
        }
        else if(a[mid] < a[s]){
            e = mid-1;
        }else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}


int main()
{
    vector<int> a = {50,60,70,10,20,30,40};
    int ans = pivotIndex(a);
    cout<<ans<<endl;
    cout<<"Pivot Index :- "<<a[ans]<<endl;
    return 0;
}