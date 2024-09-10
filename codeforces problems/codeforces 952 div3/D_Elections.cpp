#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,c;
    cin>>n>>c;
     vector<long long >v;

    for(long long i=0; i<n; i++){
        long long temp;
        cin>>temp;
        v.push_back(temp);  
    }
    v[0] += c;
    vector<long long>ans(n);

    long long j = max_element(v.begin(),v.end())-v.begin();

    for(long long i=j+1; i<n; i++) ans[i] = i;
    if(j!=0) ans[0] = 1;
    else ans[j] = 0;

    long long sum = v[0];

    for(int i=1; i<j; i++){
        sum += v[i];
        if(sum >= v[j]) ans[i] = i;
        else ans[i] = i+1;
    }

    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<"\n";


     
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
