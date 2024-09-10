#include <bits/stdc++.h>
using namespace std;


int main()
{   
    int n,x; // n - no of books  x - maximum total price
    n = 4;
    x = 10;    
    vector<int>price = {4,8,5,3};
    vector<int>pages = {5,12,8,1};

    int dp[n+1][x+1];
    // dp[i][j] -> maximum no of pages when total array size is i and totalprice is j

    for(int j=0; j<=x; j++){
        dp[0][j] = 0;
    }
    for(int i=0; i<=n; i++){
        dp[i][0] = 0;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=x; j++){
            // not pick
            int not_pick = dp[i-1][j];
            int pick = 0;
            // pick
            if(j >= price[i-1]){
                pick = pages[i-1]+dp[i-1][j-price[i-1]];
            }
            dp[i][j] = max(pick,not_pick);
        }
    }

    cout<<dp[n][x]<<endl;

    
    return 0;
}
