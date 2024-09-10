#include <bits/stdc++.h>
using namespace std;

int lcs(string x, string y, int m, int n)
{
    if (m == 0 || n == 0)
        return 0;
    if (x[m - 1] == y[n - 1])
    {
        return 1 + lcs(x, y, m - 1, n - 1);
    }
    else
    {
        return max(lcs(x, y, m - 1, n), lcs(x, y, m, n - 1));
    }
}

 

int longestCommonSubsequence(string text1, string text2)
{
    int m = text1.size();
    int n = text2.size();
    return lcs(text1, text2, m, n);
}
int main()
{
    string text1 = "abdefgh";
    string text2 = "bsedegfh";
    int ans = longestCommonSubsequence(text1, text2);
    cout << "Longest Common Subsequence is: " << ans << endl;
    return 0;
}
