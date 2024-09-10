#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    if(n == 2){
        cout<<stoi(s)<<endl;
        return;
    }

    int ans = 1e9;

    for(int i=0; i<n-1; i++){
        vector<int>v;
        for(int j=0; j<i; j++) v.push_back(s[j]-'0');
        v.push_back(stoi(s.substr(i,2)));
        for(int j= i+2; j<n; j++) v.push_back(s[j]-'0');

        sort(v.begin(),v.end());
        
        if(v[0] == 0){
            cout<<0<<endl;
            return;
        }
        int sum = 0;
        for(auto i:v){
            if(i != 1) sum += i;
        }

        if(sum == 0){
            sum = 1;
        }

        ans = min(ans,sum);
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
