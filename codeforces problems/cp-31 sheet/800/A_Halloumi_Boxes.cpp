#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v; 

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);  
    } 
        
    if(k > 1) {
        cout<<"YES"<<endl;      
        return;
    } 

    vector<int>temp = v;
    sort(temp.begin(), temp.end()) ;
    if(v == temp){
        cout<<"YES"<<endl;
    } 
    else {
        cout<<"NO"<<endl;
    } 
     
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
