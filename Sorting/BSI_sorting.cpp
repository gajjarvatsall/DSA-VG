#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &v)
{
    int n = v.size();
    bool isSwap = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                isSwap = true;

                swap(v[j], v[j + 1]);
            }
        }

        if (!isSwap)
        {
            return;
        }
    }
}

void selectionSort(vector<int> &v)
{
    int n = v.size();

    for (int i = 0; i < n - 1; i++)
    {
        int smallestIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            smallestIndex = j;
        }
        swap(v[smallestIndex], v[i]);
    }
}

void insertionSort(vector<int> &v)
{
    int n = v.size();

    for (int i = 1; i < n; i++)
    {
        int curr = v[i];
        int prev = i - 1;

        while (prev >= 0 && v[prev] > curr)
        {
            v[prev + 1] = v[prev];
            prev--;
        }

        v[prev + 1] = curr;
    }
}

int main()
{
    vector<int> v = {34, 23, 54, 45, 4, 2, 34, 54, 54, 3};

    // bubbleSort(v);
    // selectionSort(v);
    insertionSort(v);

    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}