#include<bits/stdc++.h>
using namespace std;

int searchNearlySorted(int arr[],int size,int target){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid+1] == target){
            return mid+1;
        }
        if(arr[mid-1] == target){
            return mid-1;
        }
        if(target > arr[mid]){
            s = mid + 2;
        }else{
            e = mid - 2;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main()
{
    int arr[] = {10,3,40,20,50,80,70};
    int size = 7;
    int target = 80;
    int ans = searchNearlySorted(arr,size,target);
    
    cout<<"The ans is "<<ans<<endl;
    return 0;
}