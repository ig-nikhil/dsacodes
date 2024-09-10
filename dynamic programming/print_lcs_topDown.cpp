#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text1 = "abdefgh";
    string text2 = "bsedegfh";
    int n = text1.size();
    int m = text2.size();

    vector<vector<string>> t(n + 1, vector<string>(m + 1, ""));

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            if (text1[i - 1] == text2[j - 1])
            {
                t[i][j] = text1[i - 1] + t[i - 1][j - 1];
            }

            else
            {
                int size1 = t[i-1][j].size();
                int size2 = t[i][j-1].size();

                if (size1 > size2)
                {
                    t[i][j] =  t[i-1][j];
                }
                else
                {
                     t[i][j] =  t[i][j-1];
                }
            }
        }
    }

    string ans = t[n][m];
    reverse(ans.begin(), ans.end());
    cout << "Longest Common Subsequence is: " << ans << endl;
    return 0;
}