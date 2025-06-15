#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:

    int findFloor(vector<int>& arr, int target) {
        // Your code here
        int s = 0;
        int e = arr.size()-1;
        int ans = -1;
        
        if(target == 0) return -1;
        
        while(s<=e){
            int mid = s + (e-s)/2;
            if(arr[mid] <= target){
                ans = mid;
                s = mid+1;
            }else{
                e = mid-1;
            }
        }
        return ans;
    }
};

int main()
{
    
    return 0;
}