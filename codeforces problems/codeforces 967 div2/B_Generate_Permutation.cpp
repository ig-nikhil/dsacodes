#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n %2 == 1){
        for(int i=1; i<=n; i = i+2){
            cout<<i<<" ";
        }
        for(int i=n-1; i>=2; i = i-2){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else cout<<-1<<endl;
   
     
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
