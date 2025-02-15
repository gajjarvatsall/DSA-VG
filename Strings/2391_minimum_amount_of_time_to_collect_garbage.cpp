// 2391
// https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int garbageCollection(vector<string> &garbage, vector<int> &travel)
    {
        int pickP = 0;
        int travelP = 0;
        int lastHouseP = 0;

        int pickM = 0;
        int travelM = 0;
        int lastHouseM = 0;

        int pickG = 0;
        int travelG = 0;
        int lastHouseG = 0;

        for (int i = 0; i < garbage.size(); i++)
        {
            string curr = garbage[i];
            for (int j = 0; j < curr.length(); j++)
            {
                if (curr[j] == 'P')
                {
                    pickP++;
                    lastHouseP = i;
                }
                if (curr[j] == 'G')
                {
                    pickG++;
                    lastHouseG = i;
                }
                if (curr[j] == 'M')
                {
                    pickM++;
                    lastHouseM = i;
                }
            }
        }

        for (int i = 0; i < lastHouseP; i++)
        {
            travelP += travel[i];
        }
        for (int i = 0; i < lastHouseG; i++)
        {
            travelG += travel[i];
        }
        for (int i = 0; i < lastHouseM; i++)
        {
            travelM += travel[i];
        }

        return (pickP + pickG + pickM + travelP + travelG + travelM);
    }
};
int main()
{

    return 0;
}