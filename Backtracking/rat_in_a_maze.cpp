#include <bits/stdc++.h> 
using namespace std;

bool isSafe(int nsx, int nsy, vector<vector<int>> &arr, vector<vector<bool>> &isVisited, int n) {
    if (nsx < 0 || nsy < 0 || nsx >= n || nsy >= n) return false;
    if (isVisited[nsx][nsy]) return false;
    if (arr[nsx][nsy] == 0) return false;
    return true;
}

void solve(vector<vector<int>> &arr, vector<vector<bool>> &isVisited, vector<string> &ans, 
           int sx, int sy, int dx, int dy, string output, int n) {
    if (sx == dx && sy == dy) {
        ans.push_back(output);
        return;
    }

    // Prioritize Down (D) ? Right (R) ? Left (L) ? Up (U)
    if (isSafe(sx + 1, sy, arr, isVisited, n)) {
        isVisited[sx + 1][sy] = true;
        solve(arr, isVisited, ans, sx + 1, sy, dx, dy, output + 'D', n);
        isVisited[sx + 1][sy] = false;
    }

    if (isSafe(sx, sy + 1, arr, isVisited, n)) {
        isVisited[sx][sy + 1] = true;
        solve(arr, isVisited, ans, sx, sy + 1, dx, dy, output + 'R', n);
        isVisited[sx][sy + 1] = false;
    }

    if (isSafe(sx, sy - 1, arr, isVisited, n)) {
        isVisited[sx][sy - 1] = true;
        solve(arr, isVisited, ans, sx, sy - 1, dx, dy, output + 'L', n);
        isVisited[sx][sy - 1] = false;
    }

    if (isSafe(sx - 1, sy, arr, isVisited, n)) {
        isVisited[sx - 1][sy] = true;
        solve(arr, isVisited, ans, sx - 1, sy, dx, dy, output + 'U', n);
        isVisited[sx - 1][sy] = false;
    }
}

vector<string> searchMaze(vector<vector<int>> &arr, int n) {
    vector<string> ans;
    vector<vector<bool>> isVisited(n, vector<bool>(n, false));
    int sx = 0, sy = 0, dx = n - 1, dy = n - 1;

    if (arr[0][0] == 0) return ans;

    isVisited[sx][sy] = true;
    solve(arr, isVisited, ans, sx, sy, dx, dy, "", n);

    sort(ans.begin(), ans.end()); // Ensure correct output order

    return ans;
}
