// 2678. Number of Senior Citizens
// You are given a 0-indexed array of strings details. Each element of details provides information about a given passenger compressed into a string of length 15. The system is such that:

// The first ten characters consist of the phone number of passengers.
// The next character denotes the gender of the person.
// The following two characters are used to indicate the age of the person.
// The last two characters determine the seat allotted to that person.
// Return the number of passengers who are strictly more than 60 years old.

// TC :- O(n)
// SC :- O(1)


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(int i=0;i<details.size();i++){
            int result = stoi(details[i].substr(11, 2));
            cout<<result<<endl;
            if(result > 60){
                count++;
            }
        }
        return count;
    }
};


int main()
{
    
    return 0;
}