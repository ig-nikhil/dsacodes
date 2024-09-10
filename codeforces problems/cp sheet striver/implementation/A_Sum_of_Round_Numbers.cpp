#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>ans;
    int mul = 1;
    while(n){
        int rem = n%10;
        if(rem*mul != 0) ans.push_back(rem*mul);
        n = n/10;
        mul = mul*10;
    }

    cout<<ans.size()<<endl;
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
     
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