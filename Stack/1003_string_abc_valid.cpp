#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char ch : s){
            if(st.empty()){
                st.push(ch);
            }else if(ch == 'c'){
                if(!st.empty() && st.top() == 'b'){
                    st.pop();
                    if(!st.empty() && st.top() == 'a'){
                        st.pop();
                    }else{
                        return false;
                    }
                }else{
                    return false;
                }
            }else{
                st.push(ch);
            }
        }
        return st.empty();
    }
};
int main()
{
    
    return 0;
}