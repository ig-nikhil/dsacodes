#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>v(n); 
    int mx = 0;
    int my = 0;

    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;

        mx = max(x,mx);
        my = max(y,my);
    } 

    cout<<2*mx+2*my<<endl;
     
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
