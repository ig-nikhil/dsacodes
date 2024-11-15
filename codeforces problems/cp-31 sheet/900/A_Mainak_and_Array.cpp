#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v; 

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);  
    }

    auto maxidx = max_element(v.begin(),v.end());
    int maxi = *maxidx;

    auto minidx = min_element(v.begin(),v.end());
    int mini = *minidx;

    int ans = max(maxi-v[0],v[n-1]-mini);

    for(int i=1; i<n; i++){
        if(v[i-1]-v[i] > ans){
            ans = v[i-1]-v[i];
        }
    }
    

    cout<<ans<<endl;
     
}


int main()
{   
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}
