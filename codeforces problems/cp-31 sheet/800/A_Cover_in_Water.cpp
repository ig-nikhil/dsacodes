#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count = 0;
    int ans  = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '.'){
            count++;
            if(count == 3){
                cout<<2<<endl;
                return;
            }
        }
        else {
            ans += count;
            count = 0;
            
        }

            
    }
    ans += count;

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
