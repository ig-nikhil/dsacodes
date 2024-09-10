#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long mod = 1e9 + 7;
    long long n;
    cin >> n;

    // dp[i][0] -->  no of different towers are possible if from i-1 th row coming tower is horizontal upto the nth row
    // dp[i][1] --> no of different towers are possible if from i-1 th row coming tower is two vertical upto the nth row
    vector<vector<long long>> dp(n + 1, vector<long long>(2));
    dp[n][0] = 1;
    dp[n][1] = 1;

    for (long long i = n - 1; i >= 1; i--)
    {
        dp[i][0] = (dp[i + 1][1] + 2 * dp[i + 1][0]) % mod;
        dp[i][1] = (dp[i + 1][0] + 4 * dp[i + 1][1]) % mod;
    }

    cout << (dp[1][0] + dp[1][1]) % mod;

    return 0;
}
