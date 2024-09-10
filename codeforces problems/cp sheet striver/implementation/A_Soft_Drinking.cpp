#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int toast = min((k*l)/nl , min(c*d,p/np))/n;
    cout<<toast<<endl;
    return; 
     
}


int main()
{   
    int t = 1;
    
    while(t--){
        solve();
    }
    
    return 0;
}