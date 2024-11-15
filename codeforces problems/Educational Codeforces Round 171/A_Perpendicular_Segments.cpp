#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int x,y,k;
    cin>>x>>y>>k;

    x = min(x,y);

    cout<<0<<" "<<0<<" "<<x<<" "<<x<<endl;
    cout<<x<<" "<<0<<" "<<0<<" "<<x<<endl;
     
}


signed main()
{   
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}
