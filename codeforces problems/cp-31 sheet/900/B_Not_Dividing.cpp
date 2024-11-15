#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v; 

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp+1);  
    } 

    for(int i=0; i<n-1; i++){
        if(v[i+1] % v[i] == 0){
          
                v[i+1]++;
    
         
        }
    }

    

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