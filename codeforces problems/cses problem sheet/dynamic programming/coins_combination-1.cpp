#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>&coins, int target, int n){
    vector<int>dp(target+1,0);
    dp[0] = 1;

    for(int i=1; i<=target; i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            if(i >= coins[j]){
                sum += dp[i-coins[j]];
            }
        }
        dp[i] = sum;
    }
    return dp[target];
}

int main()
{   
    int n = 3;
    int target = 9;
    vector<int>coins = {2,3,5};
    cout<<solve(coins,target,n)<<endl;
    
    return 0;
}
