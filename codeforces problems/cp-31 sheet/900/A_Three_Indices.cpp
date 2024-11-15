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

    for(int i=1; i<n-1; i++) {
        if(v[i-1] < v[i] && v[i+1] < v[i]){
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1<<" "<<i+2<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
     
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



