#include <bits/stdc++.h>
using namespace std;

int lcs_memoization(string x, string y, int m, int n, vector<vector<int>>& t) {
    if (m == 0 || n == 0)
        return 0;
    if (t[m][n] != -1)
        return t[m][n];
    if (x[m - 1] == y[n - 1]) {
        t[m][n] = 1 + lcs_memoization(x, y, m - 1, n - 1, t);
    } else {
        t[m][n] = max(lcs_memoization(x, y, m - 1, n, t), lcs_memoization(x, y, m, n - 1, t));
    }
    return t[m][n];
}

int longestCommonSubsequence(string text1, string text2) {
    int m = text1.size();
    int n = text2.size();
    vector<vector<int>> t(m + 1, vector<int>(n + 1, -1));

    return lcs_memoization(text1, text2, m, n, t);


}

int main() {
    string text1 = "abdefgh";
    string text2 = "bsedegfh";
    int ans = longestCommonSubsequence(text1, text2);
    cout << "Longest Common Subsequence is: " << ans << endl;
    return 0;
}
