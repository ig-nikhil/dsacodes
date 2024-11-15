#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n;
    cin>>n;
    vector<int>v; 

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);  
    }

    if(n==1){
        if(v[0]) cout<<1<<endl;
        else cout<<0<<endl;
        return;
    }

    int flag  = 1;
    for(int i=0; i<n; i++){
        if(v[i] != 0){
            flag = 0;
            break;
        }
    }
    if(flag){
        cout<<0<<endl;
        return;
    }

    int cnt = 0;
    int ans = 0;

    for(int i=0; i<n; i++){
        if(v[i] != 0){
            cnt++;
        }
        else{
            if(cnt>=1) ans++;
            cnt = 0;   
        }
    }
    if(cnt>=1) ans++;

    if(ans > 1) cout<<2<<endl;
    else cout<<1<<endl;
     
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
