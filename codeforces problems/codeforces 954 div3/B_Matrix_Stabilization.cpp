#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    vector<vector<int>> result = v;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int key1 = INT_MIN;
            int key2 = INT_MIN;
            int key3 = INT_MIN;
            int key4 = INT_MIN;

            if (i - 1 >= 0) key1 = v[i - 1][j];
            if (i + 1 < n) key2 = v[i + 1][j];
            if (j - 1 >= 0) key3 = v[i][j - 1];
            if (j + 1 < m) key4 = v[i][j + 1];

            if (v[i][j] > key1 && v[i][j] > key2 && v[i][j] > key3 && v[i][j] > key4) {
                result[i][j] = max({key1, key2, key3, key4});
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
