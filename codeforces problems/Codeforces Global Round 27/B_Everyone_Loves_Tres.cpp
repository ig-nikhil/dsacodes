#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n;
    cin>>n;
    
    if(n == 1 || n == 3){
        cout<<-1<<endl;
        return;
    }

    string str = "";

    if(n%2 == 0){
        for(int i=0; i<n-2; i++){
            str += '3';
        }

        str += "66";

        cout<<str<<endl;
    }
    else{
        for(int i=0; i<n-5; i++){
            str += '3';
        }

        str += "36366";

        cout<<str<<endl;
    }
     
}


signed main()
{   
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}
