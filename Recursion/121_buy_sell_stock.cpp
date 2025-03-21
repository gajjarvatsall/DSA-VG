#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &prices, int i, int &minP, int &ans)
{
    if (i == prices.size())
        return;
    minP = min(minP, prices[i]);
    ans = max(ans, prices[i] - minP);
    solve(prices, i + 1, minP, ans);
}
int maxProfit(vector<int> &prices)
{
    if (prices.empty())
        return 0;
    int ans = 0;
    int minP = INT_MAX;
    solve(prices, 0, minP, ans);
    return ans;
}
int main()
{
    vector<int> prices = {7, 5, 6, 1, 8, 3};
    cout << maxProfit(prices) << endl;
    return 0;
}