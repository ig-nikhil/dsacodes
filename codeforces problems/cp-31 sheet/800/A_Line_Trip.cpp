#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int>v; 

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);  
    }
    int maxi = 0;
    int prev = 0;
    for(int i=0; i<n; i++){
        maxi = max(maxi,v[i]-prev);
        prev = v[i];
    }
    maxi = max(maxi,2*(x-v[n-1])) ;
    cout<<maxi<<endl;
     
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