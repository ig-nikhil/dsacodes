#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n); 

    for(int i=0; i<n; i++) cin>>v[i];

    vector<int>queries(k);
    for(int i=0; i<k; i++) cin>>queries[i]; 

    for(int i=0; i<k; i++){
        int element = queries[i];
        int l=0;
        int r=n-1;
        bool flag = true;
        while(l<=r){
            int mid = l + (r-l)/2;

            if(v[mid] == element){
                cout<<"YES"<<endl;
                flag = false;
                break;
            }
            if(v[mid] < element){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }

        if(flag)cout<<"NO"<<endl;
    }
     
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