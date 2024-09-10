#include <bits/stdc++.h>
using namespace std;

int maxCake(vector<pair<int,int>>&v, int idx, int goodmove, vector<vector<int>>&t){
   
    if(idx == v.size()){
        return 0;
    }
    if(t[idx][goodmove] != -1) return t[idx][goodmove];

    int take = INT_MIN;
    if(goodmove >= v[idx].second){
        take = 1+maxCake(v,idx+1,goodmove-v[idx].second,t);
    }

    int not_take = maxCake(v,idx+1,goodmove+1,t);

    return t[idx][goodmove]= max(take,not_take);
}

void solve(){
    int n;
    cin>>n;
    unordered_map<int,int> mpp; 

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        mpp[temp]++;
    }

    vector<pair<int,int>>v;
    
    for(auto i = mpp.begin(); i != mpp.end(); i++){
        v.push_back({i->first,i->second});
    }
    sort(v.begin(),v.end());
    vector<vector<int>>t(v.size()+1,vector<int>(v.size()+1,-1));

    int ans = v.size() - maxCake(v,0,0,t);
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
