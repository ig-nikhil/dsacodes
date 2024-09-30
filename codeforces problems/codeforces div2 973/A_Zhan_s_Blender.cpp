#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long  n,x,y;
    cin>>n>>x>>y;

    long long mini = min(x,y);
    if(n%mini == 0){
        cout<<n/mini<<endl;
    }
    else{
        cout<<n/mini+1<<endl;
    }
   
     
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