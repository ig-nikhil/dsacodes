#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,m;
    cin>>n>>m;
    vector<long long>v(m);   

    for(long long i=0; i<m; i++){
        cin>>v[i];   
    }
    sort(v.begin(),v.end());
    priority_queue<long long>dist;

    for(long long i=1; i<m; i++){
        dist.push(v[i]-v[i-1]-1);
    }
    dist.push(n-v[m-1]+v[0]-1);
    int ans = 0;

    for(int i=0; !dist.empty(); i = i + 4){
        int temp = dist.top();
        dist.pop();
        temp = temp - i;
        if(temp <=0) break;
        if(temp != 1){
            ans += temp -1;
        }
        else ans += 1;
    }

    cout<<n-ans<<endl;
    
     
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


