#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    vector<long long>v; 

    for(long long i=0; i<n; i++){
        long long temp;
        cin>>temp;
        v.push_back(temp);  
    } 

    long long diff = v[n-2];

    for(int i=n-3; i>=0; i--){
        long long x = v[i];

        diff = diff-x;

    }

    cout<<v[n-1]-diff<<endl;
     
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