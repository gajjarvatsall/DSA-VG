#include <bits/stdc++.h>
using namespace std;
int changeCoin(vector<int> &coins, int amount)
{
    if (amount == 0)
    {
        return 0;
    }
    int minCoins = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        if (coins[i] <= amount)
        {
            int recCall = changeCoin(coins, amount - coins[i]);
            if (recCall != INT_MAX)
            {
                minCoins = min(minCoins, 1 + recCall);
            }
        }
    }
    return minCoins;
}

int main()
{
    vector<int> coins = {3, 6};
    int amount = 8;
    int ans = changeCoin(coins, amount);
    if (ans == INT_MAX)
    {
        ans = -1;
    }
    cout << "The minimum coins will be :- " << ans << endl;
    return 0;
}