#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

bool istrue(int mid, int k, vector<int>&v){
    vector<int>temp = v;
    int sum  = 0;
    for(auto i:v){
        sum += i>mid ? mid : i;
    }
    return sum/mid >= k;
}

bool comp(int a, int b){
    return a>b;
}

void solve(){
    int n,k;
    cin>>k>>n;
    vector<int>v; 

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);  
    } 

    sort(v.begin(),v.end(),comp);

    int lo = 0;
    int hi = 1e9+1;
    int ans = 0;

    while(hi >= lo){
        int mid = lo + (hi-lo)/2;

        if(istrue(mid,k,v)){
            ans = mid;
            lo = mid+1;
        }
        else hi = mid-1;
    }

    cout<<ans<<endl;


     
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
