#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

bool isInterleave(string s1, string s2, string s3)
{
    int n = s1.size();
    int m = s2.size();
    int l = s3.size();

    if (n + m != l)
    {
        return false;
    }

    vector<vector<bool>> t(n + 1, vector<bool>(m + 1, false));
    t[0][0] = true;

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            bool r1;
            bool r2;
            if (s1[i - 1] == s3[i + j - 1])
            {
                r1 = t[i - 1][j];
            }

            if (s2[j - 1] == s3[i + j - 1])
            {
                r2 = t[i][j - 1];
            }

            t[i][j] = r1 || r2;
        }
    }
}
