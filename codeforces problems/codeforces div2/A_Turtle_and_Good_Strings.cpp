#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.size() == 1){
        cout<<"NO"<<endl;
        return;
    }
    if(s[0] == s[s.size()-1]){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
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
