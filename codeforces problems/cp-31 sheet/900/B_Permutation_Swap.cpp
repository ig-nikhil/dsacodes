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

    int ans = abs(v[0]-1);
    for(int i=1; i<n; i++){
        ans = __gcd(ans,abs(v[i]-(i+1)));
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