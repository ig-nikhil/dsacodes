#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;


bool istrue(vector<int>&v, int k, double len){
    int cnt = 0;
    for(int i=0; i<v.size(); i++) cnt += (int)(v[i]/len);

    return cnt >= k;
}

void solve(){       
   int n,k;
   cin>>n>>k;

   vector<int>v(n);
   for(int i=0; i<n; i++) cin>>v[i];

   double ans = -1;

   double hi = *max_element(v.begin(),v.end());
   double val = 0.0000001;
    double lo = 0;
   
   while(hi-lo > val){
        double mid = lo + (hi-lo)/2;
        
        if(istrue(v,k,mid)){
            lo = mid;
        }
        else hi = mid;
    
   }

 cout << fixed << setprecision(6) << lo << endl;

     
}


signed main()
{   
ios::sync_with_stdio(false);
cin.tie(0);
//cout<<setprecision(10);
    int t = 1;
    
    while(t--){
        solve();
    }
    
    return 0;
}
