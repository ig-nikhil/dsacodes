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

    vector<int>ans;
    ans.push_back(v[0]);

    for(int i=1; i<n; i++){
        if(v[i-1] <= v[i]){
            ans.push_back(v[i]);
        }
        else{
            ans.push_back(v[i]);
            ans.push_back(v[i]);
        }
    }
    cout<<ans.size()<<endl;
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
     
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
