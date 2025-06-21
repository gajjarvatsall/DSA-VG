#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void solve(vector<int>& arr,int i,vector<int>& ans,int sum){
        if(i >= arr.size()){
            ans.push_back(sum);
            return;
        }
        sum+=arr[i];
        solve(arr,i+1,ans,sum);
        sum-=arr[i];
        solve(arr,i+1,ans,sum);
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int> ans;
        int sum = 0;
        solve(arr,0,ans,sum);
        return ans;
    }
};
int main()
{
    
    return 0;
}