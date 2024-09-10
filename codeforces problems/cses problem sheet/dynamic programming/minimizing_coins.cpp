#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>&coins, int target, int n){
    vector<int>dp(target+1,1e9);
    dp[0] = 0;
    for(int i=0; i<n; i++){
        dp[coins[i]] = 1;
    }

    for(int i=1; i<=target; i++){
        for(int j=0; j<n; j++){
            if(i >= coins[j]){
                dp[i] = min(dp[i],1+dp[i-coins[j]]);
            }
        }
    }
    return dp[target] == 1e9 ? -1 : dp[target];
}

int main()
{   
    int n = 3;
    int target = 7;
    vector<int>coins = {3,5,8};
    cout<<solve(coins,target,n);
    
    return 0;
}
