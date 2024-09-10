#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>&coins, int target, int n){
   vector<vector<int>>dp(n+1,vector<int>(target+1));
    // dp[i][k] --> no of ways to achieve sum k such that only coins[i to n-1] are pickable

    for(int i=0; i<n; i++){
        dp[i][0] = 1;
    }

    for(int i=n-1; i>=0; i--){
        for(int sum = 1; sum <= target; sum++){
            // not picking
            int not_pick = dp[i+1][sum];
            int pick = 0;
            if(sum >= coins[i]){
                pick = dp[i][sum-coins[i]];
            }
            dp[i][sum] = pick + not_pick;
        }
    }

    return dp[0][target];
   
}

int main()
{   
    int n = 3;
    int target = 9;
    vector<int>coins = {2,3,5};
    cout<<solve(coins,target,n)<<endl;
    
    return 0;
}
