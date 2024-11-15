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
    int ans = 1e9;
    for(int i=0; i<n; i++){
        int cnt = 0;
        for(int j=i+1; j<n; j++){
            if(v[j] > v[i]){
                cnt++;
            }
        }

        ans = min(ans,cnt+i);
    }

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
