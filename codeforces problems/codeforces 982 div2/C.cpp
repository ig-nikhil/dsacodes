#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

int dfs(int size , vector<int>&v, int n,  int extra){

    int res = 0;
    int flag = 1;
    for(int i=1; i<n; i++ ){
        if(v[i] == (size+extra)-i){
            flag = 0;
            res = max(res,dfs(size,v,n,extra+i));
        }
    }
    if(flag) return extra;
    return res;
}

void solve(){
    int n;
    cin>>n;
    vector<int>v; 

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);  
    }

    cout<<v.size()+dfs(v.size(),v,n,0)<<endl; 
     
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
