#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s1,s2;
    cin>>s1>>s2;
    int n = s1.size();
    int m=s2.size(),ans = m;
    for(int start = 0; start<m; start++){
        int curr = start,i2=start;
        for(int i1=0; i1<n;i1++)
        if(s1[i1] == s2[i2]){
            i2++;
            if(i2 == m)
                break;
        }
       ans = min(ans,curr+m-i2); 

    }
    cout<<ans+n<<endl;
}

signed main(){
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;    
}