// 205
// https://leetcode.com/problems/isomorphic-strings/


#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void normalise(string& str) {
            char start = 'a';
            unordered_map<char, char> mapping;
    
            for (int i = 0; i < str.length(); i++) {
                char stringKaCharacter = str[i];
                if (mapping.find(stringKaCharacter) == mapping.end()) {
                    mapping[stringKaCharacter] = start;
                    start++;
                }
            }
    
            for (int i = 0; i < str.length(); i++) {
                char mappedCharacter = mapping[str[i]];
                str[i] = mappedCharacter;
            }
        }
    
        bool isIsomorphic(string s, string t) {
            normalise(s);
            normalise(t);
            return !t.compare(s);
        }
    };

int main()
{
    
    return 0;
}