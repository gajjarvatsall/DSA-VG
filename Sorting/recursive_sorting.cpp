#include <bits/stdc++.h>
using namespace std;

vector<int> selection(vector<int> &v, int n, int i)
{
    if (i == n)
        return v;

    int min = i;
    for (int j = i + 1; j < n; j++)
    {
        if (v[j] < v[min])
        {
            min = j;
        }
    }
    swap(v[i], v[min]);

    selection(v, n, i + 1);
    return v;
}


vector<int> bubble(vector<int> &v, int i)
{
    if (i == 0)
        return v;

    for (int j = 1; j < i; j++)
    {
        if (v[j] < v[j - 1])
        {
            swap(v[j], v[j - 1]);
        }
    }

    bubble(v, i - 1);
    return v;
}

vector<int> insertion(vector<int> &v, int n, int i)
{
    if (i == n)
        return v;

    int j = i;
    for (int j = i; j > 0; j--)
    {
        if (v[j - 1] > v[j])
        {
            swap(v[j - 1], v[j]);
        }
        else if (v[j - 1] < v[j])
        {
            break;
        }
    }

    insertion(v, n, i + 1);
    return v;
}




int main()
{
    ofstream outfile;
    outfile.open("recursive_insertion.txt", ios_base::app);
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
    }

    auto start = chrono::high_resolution_clock::now();

    // Start sorting from index 0
    v = bubble(v, n);

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = (end - start) * pow(10, 6);
    cout << "Execution time: " << duration.count() << " milliseconds." << endl;

    outfile << n << " " << duration.count() << endl;

    outfile.close();

    return 0;
}
