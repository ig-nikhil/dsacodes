#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int maxi = 0;
    int cnt = 0;
    char prev;

    for(int i=0; i<s.size(); i++){
        if(s[i] == prev){
            cnt++;
            maxi = max(cnt,maxi);
        }
        else{
            cnt = 1;
            maxi = max(maxi,cnt);
        }
        prev = s[i];
    }

    cout<<maxi+1<<endl;
     
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
