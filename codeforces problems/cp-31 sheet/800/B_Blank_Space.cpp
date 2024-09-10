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

    int maxi = 0;
    int count = 0;

    for(int i=0; i<n; i++){
        if(v[i] == 0){
            count++;
            maxi = max(maxi,count);
        }
        else count  = 0;
    }
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
