#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int start = 0;
        int balance = 0;
        int def = 0;

        for (int i = 0; i < gas.size(); i++)
        {
            balance = balance + gas[i] - cost[i];
            if (balance < 0)
            {
                def = def + abs(balance);
                start = i + 1;
                balance = 0;
            }
        }
        if (balance - def >= 0)
        {
            return start;
        }
        else
        {
            return -1;
        }
    }
};
int main()
{

    return 0;
}