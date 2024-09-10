#include <bits/stdc++.h>
using namespace std;    

void solve(){
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
        auto i = v.end()->second;
        if(abs(it-i) <= 1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    else{
        cout<<"No"<<endl;
    }

     
}


int main()
{   
    int t = 1;
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}