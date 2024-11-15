#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
#define double long double

bool istrue(vector<int>&v, int k, int dist){
   int cnt = 1;
   int last_idx = 0;
   for(int i=1; i<v.size(); i++){
        if(v[i]-v[last_idx] >= dist){
            last_idx = i;
            cnt++;
        }
   }

   return cnt >= k;
}

void solve(){
    int n,k;
    cin>>n>>k;  
    vector<int>v(n); 

    for(int i=0; i<n; i++){
       cin>>v[i]; 
    }

    int lo = 0;
    int hi = v[n-1]-v[0];
    int ans = -1;

    while(hi >= lo){
        int mid = lo + (hi-lo)/2;

        if(istrue(v,k,mid)){
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
    int t =1 ;
    
    while(t--){
        solve();
    }
    
    return 0;
}
