#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string str;
    cin >> n;
    cin >> str;
    string s = "";
    for(int i=0; i<n; i++){
        if(str[i] == '1'){
            if(i==0 || str[i-1] == '1') s+= '1';
            else{
                s += '0';
                s += '1';
            }
        }
    }
    if(str[n-1] == '0') s+= '0';

    int c0 = 0;
    int c1 = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '1') c1++;
        else c0++;
    }

    if(c0 >= c1) {
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
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
