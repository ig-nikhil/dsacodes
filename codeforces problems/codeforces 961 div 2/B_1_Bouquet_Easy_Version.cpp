#include <bits/stdc++.h>
using namespace std;



void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>v;
 

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);  
    }
    sort(v.begin(),v.end());

    int i=0,j=0;
    int ans = 0;
    int sum = 0;

    while(j<n){
        sum += v[j];
        while(sum > m || abs(v[j]-v[i]) > 1){
            sum -= v[i];
            i++;
        }

        if(sum <= m ){
            if( abs(v[j]-v[i]) <= 1){
                ans = max(ans,sum);
            }
        }
        j++;
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