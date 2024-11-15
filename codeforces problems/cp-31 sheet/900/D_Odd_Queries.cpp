#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,q;
    cin>>n>>q;
    vector<long long>v; 

    for(long long i=0; i<n; i++){
        long long temp;
        cin>>temp;
        v.push_back(temp);  
    } 

    vector<long long>prefix(n);
    long long sum = 0;
    for(long long i=0; i<n; i++){
        sum = v[i]+sum;
        prefix[i] = sum;
    }

    // for(auto i:prefix){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    for(long long i=0; i<q; i++){
        long long l,r,k;
        cin>>l>>r>>k;
        long long diff;
        if(l>1)  diff = (prefix[r-1]- prefix[l-2]);
        else diff = prefix[r-1];
        long long val = sum-diff + k*(r-l+1);
        // cout<<val<<" "<<diff<<" ";
        if(val % 2 == 1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    
     
}


int main()
{   
    long long t;
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}
