#include <bits/stdc++.h>
using namespace std;


int main()
{   
    int a,b;
    cin>>a>>b;

    vector<vector<int>>dp(a+1,vector<int>(b+1,1e9));

    for(int i=1; i<=a; i++){
        dp[i][1] = i-1;
    }
    for(int j=1; j<=b; j++){
        dp[1][j] = j-1;
    }

    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            if(i==j) dp[i][j] = 0;
        }
    }

    for(int i=2; i<=a; i++){
        for(int j=2; j<=b; j++) {

                for(int r = 1; r<j; r++){
                    dp[i][j] = min(dp[i][j],1+dp[i][j-r]+dp[i][r]);
                }

                for(int c= 1; c<i; c++){
                    dp[i][j] = min(dp[i][j],1+dp[i-c][j]+dp[c][j]);
                }
        }
    }

    cout<<dp[a][b]<<endl;
    
    return 0;
}
