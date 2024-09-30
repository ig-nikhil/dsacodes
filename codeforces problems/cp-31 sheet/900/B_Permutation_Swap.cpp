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
    int cnt = 0;

    for(int i=0; i<n; i++){
        if(v[i] == i+1){
            cnt++;
            maxi = max(cnt,maxi);
        }
        else{
            cnt = 0;
        }
    }

    cout<<maxi+1<<endl;
    


     
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