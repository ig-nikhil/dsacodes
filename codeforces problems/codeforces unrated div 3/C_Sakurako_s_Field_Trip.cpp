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

    int cnt = 0;


    for(int i=1; i<n; i++){
        if(v[i] == v[i-1]){
            if(v[n-i-1] != v[i] && (v[n-i] != v[i] || v[n-i-2] != v[i]) ){
                swap(v[i],v[n-i-1]);
            }
            else{
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
     
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
