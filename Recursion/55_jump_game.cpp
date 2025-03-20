#include <bits/stdc++.h>
using namespace std;
bool jumpGame(vector<int> arr, int i)
{
    if (i == arr.size() - 1)
        return true;
    if (i >= arr.size())
        return false;

    bool rec = false;

    for (int j = 1; j <= arr[i]; j++)
    {
        rec = rec || jumpGame(arr, i + j);
    }
    return rec;
}
int main()
{
    vector<int> arr = {2, 3, 1, 1, 4};
    bool ans = jumpGame(arr, 0);
    cout << ans << endl;
    return 0;
}