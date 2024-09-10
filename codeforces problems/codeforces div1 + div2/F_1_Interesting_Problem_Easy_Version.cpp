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

     int ans = 0;
     int cnt = 1;

     for(int i=n-2; i>=0; i--){
        if(v[i] = i+1 && cnt>=1){
            ans += 1;
            cnt--;
        }
        else {
            cnt++;
        }
     
}
  cout<<ans<<endl;
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