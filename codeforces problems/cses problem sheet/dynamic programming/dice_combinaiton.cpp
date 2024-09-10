#include <bits/stdc++.h>
using namespace std;

int solve(int n){
    if(n<0) return 0;
    if(n <= 1) return 1;
    int sum = 0;
    for(int i=1; i<=6; i++){
        sum += solve(n-i);
    }
    return sum;
}

int main()
{   
    int n;
    cin>>n;
    int dp[n+1];
    dp[0] = 1;
    dp[1] = 1;

    for(int i=2; i<=n; i++){
        dp[i] = 0;
        for(int j=1; j<=6; j++){
            if(i-j >=0) dp[i] += dp[i-j];
        }
    }

    cout<<dp[n]<<endl;
    
    
    return 0;
}
