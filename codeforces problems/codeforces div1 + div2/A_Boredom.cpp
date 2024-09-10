#include <bits/stdc++.h>
using namespace std;


int main()
{   
    int n;
    cin>>n;
    vector<long long>m(100001,0);

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        m[temp] += temp;
    } 

    vector<long long>dp(100001);
    dp[0] = 0;
    dp[1] = m[1];

    for(int i=2; i<100001; i++){
        dp[i] = max(dp[i-1],dp[i-2]+m[i]);
    }

    cout<<dp[100000]<<endl;
    
    return 0;
}
