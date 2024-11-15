#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

bool istrue(vector<double>&a, vector<double>&b, int n, int k, double mid){
    vector<double>temp(n);

    for(int i=0; i<n; i++){
        temp[i] = a[i]-(mid*b[i]);
    }
    sort(temp.begin(),temp.end());
    reverse(temp.begin(),temp.end());
    // for(auto i:temp){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    double sum = 0;
    for(int i=0; i<k; i++){
        sum += temp[i];
    }

    return sum >= 0;
}

void solve(){
    int n,k;
    cin>>n>>k;
    vector<double>a(n);
    vector<double>b(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
        cin>>b[i]; 
    }

    double lo = 0;
    double hi = 1e6;

    while(hi-lo >= 0.00000001){
        double mid = lo + (hi-lo)/2;

        if(istrue(a,b,n,k,mid)){
            lo = mid;
        }
        else hi = mid;
    } 

    cout<<fixed<<setprecision(10)<<lo<<endl;
     
}


signed main()
{   
ios::sync_with_stdio(false);
cin.tie(0);
    int t = 1;
    
    while(t--){
        solve();
    }
    
    return 0;
}
