#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long x,y,k;
    cin>>x>>y>>k;

    long long maxi = 0;
    long long flag = 0;
    maxi = max(maxi,(long long)ceil(x/k));
    maxi = max(maxi,(long long)ceil(y/k));


    if(ceil(x/k) > ceil(y/k)) flag = 1;

   if(flag) cout<<(2*maxi)-1<<endl;
   else cout<<2*maxi<<endl;
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
