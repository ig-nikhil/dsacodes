#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k;
    cin>>n>>k;
    vector<long long>v; 

    for(int i=0; i<k; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);  
    }
long long sum = 0;
    sort(v.begin(),v.end());
    for(int i=0; i<v.size()-1; i++){
        sum += v[i]-1 + v[i];
    }
    cout<<sum<<endl;
     
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