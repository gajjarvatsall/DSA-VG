#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

int main()
{
    vector<int> v;
    v.push_back(23);
    v.push_back(45);
    v.push_back(32);
    v.push_back(0);
    v.push_back(9);
    v.push_back(-1);
    v.push_back(34);
    v.push_back(5);
    v.push_back(11);

    bubbleSort(v);

    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}