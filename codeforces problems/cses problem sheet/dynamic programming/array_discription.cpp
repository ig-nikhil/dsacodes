#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n = 7;
    int m = 5;

    vector<int>arr = {1,2,2,3,3,0,0};
    // dp[i][k] -> no of array upto index i where last element is k
    vector<vector<int>>dp(n+1, vector<int>(m+1));   

    // base case 
    for(int k=1; k<=m; k++){
        if(arr[0] == 0 || arr[0] == k) dp[1][k] = 1;
    }

    for(int i=2 ; i<=n; i++){
        for(int k=1; k<=m; k++){
            if(arr[i-1] != 0 && arr[i-1] != k){
                dp[i][k] = 0;
                continue;
            }

            for(int prev = k-1; prev <= k+1; prev++){
                if(prev >= 1 && prev <= m) dp[i][k] += dp[i-1][prev];
            }
            
        }
    }

    int ans  = 0;
    for(int k=1; k<=m; k++){
        ans += dp[n][k];
    }

    cout<<ans<<endl;

    

    
    return 0;
}
