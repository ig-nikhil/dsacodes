#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>v; 

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);  
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    int ans = 0;
    bool flag = false;
    if(n%2 != 0){
        flag = true;
        n--;
    }
    int a = 0;
    int b = 0;

    for(int i=0; i<n; i++){
        if(i%2 == 0) a += v[i];
        else b += v[i];
    }
    ans = a-b;
    if(k>=ans){
        if(flag) cout<<v[n]<<endl;
        else cout<<0<<endl;
    }
    else{
        if(flag) cout<<ans-k+v[n]<<endl;
        else cout<<ans-k<<endl;
    }


     
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