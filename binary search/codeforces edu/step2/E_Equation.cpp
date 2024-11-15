#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double  
const int mod = 1e9 + 7;

bool istrue(double c, double x){
    double val = x*x + sqrt(x);    
    return val <= c;
}

void solve(){
    double c;
    cin>>c;

    double lo =  0.5;
    double hi = 1e9;

    while(hi-lo >= 0.0000001){
        double mid = lo + (hi-lo)/2;

        if(istrue(c,mid)){
            lo = mid;
        }
        else hi = mid;
    }

    cout<<lo<<endl;


     
}


signed main()
{   
ios::sync_with_stdio(false);
cin.tie(0);

cout<<fixed<<setprecision(15);
    int t = 1;
    
    while(t--){
        solve();
    }
    
    return 0;
}
