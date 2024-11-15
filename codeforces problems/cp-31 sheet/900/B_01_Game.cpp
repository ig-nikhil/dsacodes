#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

void solve(){
    string str;
    cin>>str;
    int cnt = 0;

    while(true){
    int flag =1;
    for(int i=0; i<str.size()-1; i++){
        if(str[i] != str[i+1]){
            str.erase(i,2);
            cnt++;
            flag = 0;
            break;
        }
    }

    if(flag || str.size() == 0){
        break;
    } 

    }

    if(cnt%2 == 0) cout<<"NET"<<endl;
    else cout<<"DA"<<endl;
     
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
