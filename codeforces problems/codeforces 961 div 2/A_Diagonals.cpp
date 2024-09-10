#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;

    int ans = 0;
    int i=0;
    while(k>0){
        if(i == 0){
            k -= (n-i);
            ans++;
        }
        else{
            k -= (n-i);
            ans++;
            if(k>0){
                k -= (n-i);
                ans++;
            } 
        }

        i++;
        
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
