#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n = s.size();

    for(int i=0; i<n-1; i++){
        if(s[i] == s[i+1]){
            if(s[i] != 'a' ) s.insert(i+1,"a");
            else s.insert(i+1,"b");
            break;
        }
    }

    if(s.size() == n){
         if(s[n-1] != 'a' ) s.insert(n,"a");
            else s.insert(n,"b");
    }

    cout<<s<<endl;
     
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
