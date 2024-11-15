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

    sort(v.begin(),v.end());

    int sum = v[0];

    for(int i=1; i<n; i++){
        sum = (sum + v[i]) / 2;
    }



    cout<<(sum)<<endl;

    
     
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