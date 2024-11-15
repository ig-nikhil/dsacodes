#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

bool istrue(int n, int k, int mid){
    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(mid%i == 0){
            cnt += min(mid/i-1 , n);
        }
        else cnt += min(mid/i , n);
        
    }

    return cnt < k;
}

void solve(){
    int n,k;
    cin>>n>>k;

    int lo = 1;
    int hi = n*n;
    int ans = -1;

    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(istrue(n,k,mid)){
            ans = mid;
            lo = mid+1;
        }
        else hi = mid-1;
    }

    cout<<ans<<endl;
}


signed main()
{   
ios::sync_with_stdio(false);
cin.tie(0);
    int t = 1;
    
    while(t--){
        solve();
    }
    
    return 0;
}
