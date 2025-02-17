// 539
// https://leetcode.com/problems/minimum-time-difference/

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int findMinDifference(vector<string>& timePoints) {
    
            int ans = INT_MAX;
    
            vector<int> minutes;  
            for (string time : timePoints) {
                int HH = stoi(time.substr(0, 2));
                int MM = stoi(time.substr(3, 2));
                minutes.push_back(HH * 60 + MM);
            }
    
            sort(minutes.begin(), minutes.end());
    
    
            for (int i = 0; i < minutes.size()-1; i++) {
                 ans = min(ans,minutes[i+1]-minutes[i]);
            }
    
            int last = minutes[0] + 1440 - minutes[minutes.size()-1];
            ans = min(ans,last);
            return ans;
        }
    };


int main()
{
    
    return 0;
}