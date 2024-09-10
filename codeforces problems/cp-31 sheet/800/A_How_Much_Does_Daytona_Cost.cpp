#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v;
    int flag = 0; 

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        if(temp == k) flag =1 ;
        v.push_back(temp);  
    } 
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
     
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
