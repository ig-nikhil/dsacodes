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

    sort(v.begin(),v.end());

    int maxi = 1;
    int count = 1;
    for(int i=1; i<n; i++){
        if(v[i]-v[i-1] <= k){
            count++;
            maxi = max(maxi,count);
        }
        else{
            count = 1;
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