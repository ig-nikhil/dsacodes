#include <bits/stdc++.h>
using namespace std;

int lcs(string x, string y, int m, int n,int count)
{
    if (m == 0 || n == 0){
        return count;
    }

    int count1 = count;
    
    if (x[m - 1] == y[n - 1])
    {
         count1 =  lcs(x, y, m - 1, n - 1,count+1);
    }

    int count2 = lcs(x,y,m-1,n,0);
    int count3 = lcs(x,y,m,n-1,0);

    return max(count,max(count1,max(count2,count3)));

}

 


int main()
{
    string text1 = "abdefgh";
    string text2 = "bsbdegfh";
    int m = text1.size();
    int n = text2.size();
    int ans = lcs(text1, text2,m,n,0);
    cout << "Longest Common substring is: " << ans << endl;
    return 0;
}
