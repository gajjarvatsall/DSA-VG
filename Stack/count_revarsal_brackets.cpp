#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int countMinReversals(string s) {
        // code here
        stack<char> st;
        int ans = 0;
        
        if(s.size() & 1) return -1;
        
        for(int i = 0;i<s.size();i++){
            if(s[i] == '{'){
                st.push(s[i]);
            }else if(!st.empty() && st.top() == '{'){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        
        while(!st.empty()){
            char a = st.top(); st.pop();
            char b = st.top(); st.pop();
            
            if(a == b){
                ans+=1;
            }else{
                ans+=2;
            }
        }
        return ans;
    }
};
int main()
{
    
    return 0;
}