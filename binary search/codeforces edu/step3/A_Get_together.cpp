#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
#define double long double

bool istrue(vector<double>&x, vector<double>&v, double t){
    double right = 1e9+1;
    double left = -1e9-1;

    for(int i=0; i<v.size(); i++){
        right = min(right,x[i]+v[i]*t);
        left = max(left , x[i]-v[i]*t);
    }

    return right-left >= 0;
}

void solve(){
    int n;
    cin>>n;
    vector<double>x(n);
    vector<double>v(n); 

    for(int i=0; i<n; i++){
       cin>>x[i];
       cin>>v[i]; 
    }

    double lo = 0;
    double hi = 1e9+1;

    while(hi-lo >= 0.00000001){
        double mid = lo + (hi-lo)/2;

        if(istrue(x,v,mid)){
            hi = mid;
        }
        else lo = mid;
    }

    cout<<fixed<<setprecision(10)<<hi<<endl;
     
}


signed main()
{   
ios::sync_with_stdio(false);
cin.tie(0);
    int t =1 ;
    
    while(t--){
        solve();
    }
    
    return 0;
}
