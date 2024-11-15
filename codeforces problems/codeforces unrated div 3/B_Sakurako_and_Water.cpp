#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n)); 

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>v[i][j];
        } 
    }
    int sum = 0;
    for(int diff=0; diff<n; diff++){
        int mini = 0;
        for(int j=0; j<n; j++){
            if( diff+j < n && v[diff+j][j] < mini){
                mini = v[diff+j][j];
            }
        }
        sum += abs(mini);
    } 
    
    for(int diff=1; diff<n; diff++){
        int mini = 0;
  

        for(int j=0; j<n; j++){
            if( diff+j < n && v[j][diff+j]< mini){
                mini = v[j][diff+j];
            }
        }
        sum += abs(mini);
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
