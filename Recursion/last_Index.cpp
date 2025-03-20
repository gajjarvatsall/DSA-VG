//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int solve(string s,char p, int i){
        if(i < 0 ) return -1;
        if(s[i] == p){
            return i;
        }
        int rec = solve(s,p,i-1);
        return rec;
        
    }
    
    int LastIndex(string s, char p){
        return solve(s,p,s.length()-1);
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s = "Geeks";

        char p = 'e';

        Solution ob;
        cout << ob.LastIndex(s, p) << endl;

        cout << "~" << "\n";
    }
    return 0;
}

// } Driver Code Ends