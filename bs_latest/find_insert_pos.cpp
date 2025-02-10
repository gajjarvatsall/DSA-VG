#include <bits/stdc++.h>
using namespace std;

int insertPos(vector<int> a,int x){
    int s = 0;
    int e = a.size()-1;
    int ans = a.size();

    while(s<=e){
        int mid = s + (e-s)/2;
        if(a[mid] == x){
            return mid;
        }
        if(a[mid] >= x){
            ans = mid;
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
    return ans;
}

int main()
{
    vector<int> a = {11,23,28,36,50,70,90,111};
    int ans = insertPos(a, 86);

    for(auto i : a){
        cout<<i<<" ";
    }
    cout<<endl;

    if (ans != -1)
        cout << "Index inserted at: " << ans << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}