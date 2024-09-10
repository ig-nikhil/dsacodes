#include <bits/stdc++.h>
using namespace std;

void sol(vector<int>&v,int idx, int sum, int &maxi, int prev){
    if(idx == v.size()){
        maxi = max(sum,maxi);
        return;
    }

    if(v[idx] != prev+1){
        sol(v,idx+1,sum+v[idx],maxi,v[idx]);
    }

    sol(v,idx+1,sum,maxi,prev);

}

void solve(){
    int n;
    cin>>n;
    vector<int>v; 

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);  
    }

    sort(v.begin(), v.end());

    int maxi = 0;
    int idx = 0;
    int prev = -1;
    int sum = 0;

    sol(v,idx,sum,maxi,prev);

    cout<<maxi<<endl; 
     
}


int main()
{   
    int t = 1;
    
    while(t--){
        solve();
    }
    
    return 0;
}
