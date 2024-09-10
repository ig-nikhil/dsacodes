#include <bits/stdc++.h>
using namespace std;    

void solve(vector<string>&ans){
    int n;
    cin>>n;
    map<int,int>v; 

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v[temp]++; 
    }
    // for(auto i:v){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    if(v.size() <= 2 ){
        auto it = v.begin()->second;
        auto i = 
        if(abs(it-i) <= 1){
            ans.push_back("Yes");
        }
        else{
            ans.push_back("No");
        }
    }
    else{
        ans.push_back("No");
    }

     
}


int main()
{   
    int t;
    cin>>t;
    vector<string>ans;
    
    while(t--){
        solve(ans);
    }
    for(auto i:ans){
        cout<<i<<endl;
    }
    
    return 0;
}