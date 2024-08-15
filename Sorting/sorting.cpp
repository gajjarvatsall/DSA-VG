#include <bits/stdc++.h>
using namespace std;

vector<int> selection(vector<int> v, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[min])
            {
                min = j;
            }
        }
        swap(v[i], v[min]);
    }
    return v;
}

vector<int> bubble(vector<int> v, int n)
{
    int c;
    for (int i = n - 1; i >= 1; i--)
    {
        c = 0;
        for (int j = 1; j <= i; j++)
        {
            if (v[j] < v[j - 1])
            {
                c = 1;
                swap(v[j], v[j - 1]);
            }
        }
        if (c == 0)
        {
            return v;
        }
    }
    return v;
}

vector<int> insertion(vector<int> v, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (v[j-1] > v[j])
            {
                swap(v[j-1], v[j]);
            }
            else if (v[j-1] < v[j])
            {
                break;
            }
        }
    }
    return v;
}


int main()
{
    ofstream outfile;
    outfile.open("insertion.txt", ios_base::app);
    if (!outfile)
    {
        cerr << "Error opening file" << endl;
        return 1;
    }

    int n;
    cin >> n;

    vector<int> v;
    srand(static_cast<unsigned>(time(NULL)));
    for (int i = 0; i < n; i++)
    {
        int random = 1 + (rand() % 100);
        v.push_back(random);
        // cout << random << " ";
    }
    cout << endl;

    auto start = chrono::high_resolution_clock::now();

    v = insertion(v, n);

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = (end - start) * pow(10, 6);
    cout << "Execution time: " << duration.count() << " milli seconds." << endl;

    outfile << n << " " << duration.count() << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    outfile.close();

    return 0;
}
