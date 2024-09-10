#include <bits/stdc++.h>
using namespace std;




void solve(){
    int n;
    cin>>n;
    vector<long long>v; 

    for(int i=0; i<n; i++){
        long long temp;
        cin>>temp;
        v.push_back(temp);  
    }


    vector<long long>prefixsum(n);
    prefixsum[0] = v[0];
    long long mini = v[0];
   
    for(int i=1; i<n; i++){
        prefixsum[i] = prefixsum[i-1] + v[i]; 
        mini = min(mini,prefixsum[i]); 
    }

    long long c = prefixsum[n-1];
    

    if(mini < 0){
        c += 2*abs(mini);
    }


    cout<<abs(c)<<endl;
     
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
