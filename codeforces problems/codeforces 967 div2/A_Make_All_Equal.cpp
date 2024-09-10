#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    unordered_map<int,int>mpp; 

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        mpp[temp]++;
    } 
    int maxi = 0;
    for(auto i:mpp){
        if(maxi<i.second){
            maxi = i.second;
        }
    }
    cout<<n-maxi<<endl;
     
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
