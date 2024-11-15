#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s,t;
    cin>>s>>t;


    int i=0; 
    while(i<min(s.size(),t.size()) && s[i] == t[i]){
        i++;
    }
    if(i!=0)cout<<s.size()+t.size()-i+1<<endl;
    else cout<<s.size()+t.size()-i<<endl;
     
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
