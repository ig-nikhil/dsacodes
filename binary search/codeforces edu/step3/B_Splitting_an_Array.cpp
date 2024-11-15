#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
#define double long double

bool istrue(vector<int>&v, int k, int s){
    int cnt = 1;
    int sum = 0;
    int i=0;
    while(i<v.size()){
        if(sum + v[i] <= s){
            sum += v[i];
        }
        else{
            cnt++;
            if(cnt > k) return false;
            sum = v[i];
        }
        i++;
    }

    return cnt <= k;
}

void solve(){
    int n,k;
    cin>>n>>k;  
    vector<int>v(n); 

    for(int i=0; i<n; i++){
       cin>>v[i]; 
    }

    int lo = *max_element(v.begin(),v.end());
    int hi = accumulate(v.begin(),v.end(),0LL);
    int ans = -1;

    while(hi >= lo){
        int mid = lo + (hi-lo)/2;

        if(istrue(v,k,mid)){
            ans = mid;
            hi = mid-1;
        }
        else lo = mid+1;
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
