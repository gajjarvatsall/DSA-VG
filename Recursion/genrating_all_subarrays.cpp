// https://www.geeksforgeeks.org/problems/generating-all-subarrays/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(vector<int> &arr, int i, vector<vector<int>> &ans, vector<int> &ans1)
    {
        if (i == arr.size())
        {
            return;
        };

        for (int j = i; j < arr.size(); j++)
        {
            ans1.push_back(arr[j]);
            ans.push_back(ans1);
        }
        ans1.clear();
        solve(arr, i + 1, ans, ans1);
    }
    vector<vector<int>> getSubArrays(vector<int> &arr)
    {
        // code here
        vector<vector<int>> ans;
        vector<int> ans1;
        solve(arr, 0, ans, ans1);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{

    string input;
    vector<int> arr = {1, 2, 3};

    // Solution instance to invoke the function
    Solution ob;
    vector<vector<int>> result = ob.getSubArrays(arr);
    int c1 = 0;
    int c2 = 0;
    cout << "[";
    for (const auto &subarray : result)
    {
        cout << "[";
        c2 = 0;
        for (int num : subarray)
        {
            c2++;
            if (c2 != subarray.size())
                cout << num << ",";
            else
                cout << num << "";
        }
        c1++;
        if (c1 != result.size())
            cout << "], ";
        else
            cout << "]";
    }
    cout << "]" << endl;
    cout << "~" << endl;

    return 0;
}

// } Driver Code Ends