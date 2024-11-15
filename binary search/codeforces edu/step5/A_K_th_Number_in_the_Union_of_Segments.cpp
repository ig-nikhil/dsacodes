#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

bool check(vector<int>&left, vector<int>&right, int n, int k, int mid){
    int cnt = 0;
    for(int i=0; i<n; i++){
        
        if(mid > left[i]){
            cnt += min(mid-left[i],right[i]-left[i]+1);
        }

        if(cnt > k) return false;
    }

    return true;
}

void solve(){
    int n,k;
    cin>>n>>k;
    int mini = INT_MAX;
    int maxi = INT_MIN; 

    vector<int>left(n),right(n);
    for(int i=0; i<n; i++){
        cin>>left[i];
        cin>>right[i];
        mini = min(mini,left[i]);
        maxi = max(maxi,right[i]);
    }

    int lo = mini;
    int hi = maxi;

    int ans = -1;

    while(lo<=hi){
        //cout<<ans<<endl;
        int mid = lo+(hi-lo)/2;

        if(check(left,right,n,k,mid)){
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
