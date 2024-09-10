#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long x, y, k;
    cin >> x >> y >> k;

    while(k>0){
        long long v = min(k,y-x%y);
        x += v;
        while(x%y==0){
            x = x/y;
        }
        k -= v;
        if(x == 1){
            x = 1 + k%(y-1);
            break;
        }
    }

    cout << x << endl;
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
