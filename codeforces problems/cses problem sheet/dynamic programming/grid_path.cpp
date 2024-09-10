#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int mod = 1e9+7;
    int n;
    cin >> n;
    char grid[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    if(grid[0][0] != '.' || grid[n-1][n-1] != '.'){
        cout<<0<<endl;
        return 0;
    }

    // dp[i][j] = no of paths from 0,0 to i,j
    int dp[n][n];

    // base case
    dp[0][0] = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0)
                continue;
            if (grid[i][j] == '.')
            {
                int from_right = 0;
                int from_up = 0;
                if (i - 1 >= 0 && grid[i-1][j] == '.')
                {
                    from_up = dp[i - 1][j];
                }
                if (j - 1 >= 0 && grid[i][j-1] == '.')
                {
                    from_right = dp[i][j - 1];
                }

                dp[i][j] = (from_right + from_up)%mod;
            }
        }
    }

    cout<<dp[n-1][n-1]<<endl;

    return 0;
}
