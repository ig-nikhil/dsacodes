#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v; 

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);  
    }

    int ans = 0;
    for(int i=0; i<n-1; i++){
        if(v[i]%2 == 1 && v[i+1]%2 == 1 || v[i]%2 == 0 && v[i+1]%2 == 0) ans++;
    }
    cout<<ans<<endl; 
     
}


int main()
{   
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}
