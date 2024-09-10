#include <bits/stdc++.h>
using namespace std;



long long solve(vector<long long>&v, long long i, long long j,vector<vector<long long>>&dp ){
    if(i==j) return v[i];
    if(j-i == 1) return max(v[i],v[j]);

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    long long ans = max(v[i]+min(solve(v,i+1,j-1,dp),solve(v,i+2,j,dp)), v[j]+min(solve(v,i+1,j-1,dp),solve(v,i,j-2,dp)));
    return dp[i][j] = ans;
}



int main()
{

    long long n;
    cin >> n;
    vector<long long> v;

    for (int i = 0; i < n; i++)
    {
       long long temp;
        cin >> temp;
        v.push_back(temp);
    }

    vector<vector<long long>>dp(n+1, vector<long long>(n+1,-1));
    cout<<solve(v,0,n-1,dp)<<endl;

    return 0;
}
