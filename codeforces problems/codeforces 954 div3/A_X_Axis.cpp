#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;

    int mini = min(x1,min(x2,x3));
    int maxi = max(x1,max(x2,x3));
    int ans = INT_MAX;

    for(int i=mini; i<= maxi; i++){
        ans = min(ans,abs(x1-i)+abs(x2-i)+abs(x3-i));
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
