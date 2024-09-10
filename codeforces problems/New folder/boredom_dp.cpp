#include <bits/stdc++.h>
using namespace std;



void solve(){
    long long n;
    cin>>n;
    vector<long long>v(1+1e5,0); 

    for(long long i=0; i<n; i++){
        long long temp;
        cin>>temp;
        v[temp] += temp; 
    }


    vector<long long>dp(1e5+1);
    dp[0] = 0;
    dp[1] = v[1];

    for(long long i=2; i<1e5+1; i++){
        dp[i] = max(dp[i-1],dp[i-2]+v[i]);
    }

    cout<<dp[1e5]<<endl;
    


     
}


int main()
{   
    int t = 1;
    
    while(t--){
        solve();
    }
    
    return 0;
}
