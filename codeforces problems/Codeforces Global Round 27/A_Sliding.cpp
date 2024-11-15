#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n,m,r,c;
    cin>>n>>m>>r>>c;

    int total = n*m -( m*(r-1) + c);

    int ans = total -(n-r) + (n-r)*(m);
    cout<<ans<<endl;
    
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
