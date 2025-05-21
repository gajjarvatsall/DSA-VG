#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int celebrity(vector<vector<int> >& mat) {
        int n = mat.size();      
        stack<int> st;
        for(int i = 0;i<n;i++){
            st.push(i);
        }
        while (st.size() > 1) {
        int a = st.top();
        st.pop();
        
        int b = st.top();
        st.pop();
        
        if(mat[a][b] == 1){
            st.push(b);
        }else{
            st.push(a);
        }
        }
        int c = st.top();
        for(int i = 0 ; i<n;i++){
            if(i!=c){
                if(mat[c][i] == 1) return -1;
                if(mat[i][c] == 0) return -1;
            }
        }
        return st.top();
    }
};
int main()
{
    
    return 0;
}