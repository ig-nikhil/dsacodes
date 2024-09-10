#include <bits/stdc++.h>
using namespace std;


int main()
{   
    int num = 27;
    vector<int>dp(num+1,1e9);
    
    dp[0] = 0;
    
    for(int i=1; i<=num; i++){
        vector<int>digits;
        int temp = i;
        while(temp != 0){
            if(temp%10 != 0) digits.push_back(temp%10);
            temp = temp/10;
        }
        for(int j=0; j<digits.size(); j++){
            dp[i] = min(dp[i] ,1+dp[i-digits[j]]);
        }
    }

    cout<<dp[num]<<endl;
    
    return 0;
}
