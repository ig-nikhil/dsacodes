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

    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    swap(v[1],v[v.size()-1]);

    if(v[0] == v[1]){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(auto i:v){
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