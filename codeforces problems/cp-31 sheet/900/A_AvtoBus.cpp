#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n;
    cin>>n;
    if(n%2 == 1 || n<4){
        cout<<-1<<endl;
        return;
    }
    n = n/2;

    if(n==2){
        cout<<1<<" "<<1<<endl;
        return;
    }

    cout<<(n+2)/3<<" "<<n/2<<endl;
    

    
     
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
