#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

void solve(){
    int n;
    cin>>n;
    vector<int>v; 

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);  
    } 


    if(n==1){
        cout<<1<<endl;
        return;
    }

    if(n%2 == 0){
        int maxi = 0;
        for(int i=0; i<n; i = i+2){
            maxi = max(maxi,v[i+1]-v[i]);
        }
        cout<<maxi<<endl;
    }
    else{
        int ans = 1e18;
        for(int i=0; i<n; i++){
            vector<int>temp = v;
            temp.erase(temp.begin()+i);
            int maxi = 0;
            for(int j=0; j<temp.size(); j = j+2){
                maxi = max(maxi,temp[j+1]-temp[j]);
            }
            ans = min(maxi,ans);

        }

        cout<<ans<<endl;
    }


   
}


signed main()
{   
ios::sync_with_stdio(false);
cin.tie(0);
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}
