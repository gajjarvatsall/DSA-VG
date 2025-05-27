#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string FirstNonRepeating(string &s) {
        // Code here
        unordered_map<int,int> umap;
        queue<char> qt;
        string ans = "";
        
        for(int i =0;i<s.length();i++){
            
            umap[s[i]]++;
            qt.push(s[i]);
            
            while(!qt.empty()){
                if(umap[qt.front()] == 1){
                    ans.push_back(qt.front());
                    break;
                }else{
                    qt.pop();
                }
            }
            if(qt.empty()){
                ans.push_back('#');
            }
        }
        return ans;
    }
};
int main()
{
    
    return 0;
}