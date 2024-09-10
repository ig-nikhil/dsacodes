#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k,x;
    cin>>n>>k>>x;

    long long sum = n*(n+1)/2;
    long long mini = k*(k+1)/2;
    long long maxi = sum-((n-k)*(n-k+1)/2);
    
    if(x>=mini && x<=maxi) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



     
     
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