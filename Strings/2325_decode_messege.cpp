// 2325
// https://leetcode.com/problems/decode-the-message/


class Solution {
    public:
        string decodeMessage(string key, string message) {
            unordered_map<char, char> umap;
            char space = ' ';
            umap[space] = space;
            char start = 'a';
            int index = 0;
    
            while (start <= 'z' && index < key.length()) {
                if (umap.find(key[index]) != umap.end()) {
                    index++;
                } else {
                    umap[key[index]] = start;
                    index++;
                    start++;
                }
            }
    
            string ans = "";
    
            for (int i = 0; i < message.length(); i++) {
                ans.push_back(umap[message[i]]);
            }
            return ans;
        }
    };

#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    return 0;
}