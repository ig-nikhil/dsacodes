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

    int mindiff = INT_MAX;
    int idx = -1;

    for(int i=0; i<n-1; i++){
        if(v[i+1]-v[i] < mindiff){
            mindiff = v[i+1]-v[i];
            idx = i;
        }
    }
    if(mindiff < 0){
        cout<<0<<endl;
        return;
    }
    cout<<mindiff/2 + 1 <<endl;
    
     
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