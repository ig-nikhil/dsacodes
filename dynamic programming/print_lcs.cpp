#include <bits/stdc++.h>
using namespace std;

string lcs(string x, string y, int m, int n)
{
    if (m == 0 || n == 0)
        return "";
    if (x[m - 1] == y[n - 1])
    {
        return x[m-1] + lcs(x, y, m - 1, n - 1);
    }
    else
    {  int size1 = lcs(x, y, m - 1, n).size();
       int size2 = lcs(x, y, m , n-1).size();
    
        if(size1>size2){
            return lcs(x, y, m - 1, n);
        }
        else{
            return lcs(x, y, m , n-1);
        }
    }
}

int main()
{
    string text1 = "abdefgh";
    string text2 = "bsedegfh";
    int m = text1.size();
    int n = text2.size();
    string ans = lcs(text1, text2,m,n);
    reverse(ans.begin(),ans.end());
    cout << "Longest Common Subsequence is: " << ans << endl;
    return 0;
}
