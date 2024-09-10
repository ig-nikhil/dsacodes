#include <bits/stdc++.h>
using namespace std;

void solve(){
    double n,k;
    cin>>n>>k;

    if (n == 1){
        cout<<0<<endl;
        return;
    }
    cout<<ceil((n-1)/(k-1))<<endl;
    
     
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
