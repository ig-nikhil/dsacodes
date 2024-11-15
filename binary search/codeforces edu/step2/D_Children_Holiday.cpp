#include <bits/stdc++.h>
using namespace std;
#define int long long

bool istrue(int mid, vector<int>&t, vector<int>&z, vector<int>&y, int m){
    int cnt = 0;
    for(int i=0; i<t.size(); i++){

            cnt += (z[i]*(mid/(t[i]*z[i] + y[i])) + min( (mid%(t[i]*z[i] + y[i]))/t[i], z[i]));
             if (cnt >= m) return true;
      
    }

    return cnt >= m;
    
}


signed main()
{   
    ios::sync_with_stdio(false);
    cin.tie(0);
    int m,n;
    cin>>m>>n;

    vector<int>t(n);
    vector<int>z(n);
    vector<int>y(n);

    for(int i=0; i<n; i++){
        cin>>t[i];
        cin>>z[i];
        cin>>y[i];
    }

    if(m == 0){
        cout<<0<<endl;
        for(int i=0; i<n; i++){
            cout<<0<<" ";
        }
        cout<<endl;
        return 0;
    }

    int ans = -1;
    int lo = -1;
    int hi = m*200;     

    while(lo+1<hi){
        int mid = lo + (hi-lo)/2;
        if(istrue(mid,t,z,y,m)){
            ans = mid;
            hi = mid;
        }
        else lo = mid;
    }

    cout<<ans<<endl;
    int rem = m;
    for(int i=0; i<n; i++){
            int val = z[i]*(ans/(t[i]*z[i] + y[i])) + min((ans%(t[i]*z[i] + y[i]))/t[i], z[i]);
            if(val > rem){
                val = rem;
            }
            rem -= val;
            cout<<val<<" ";
      
    }
    cout<<endl;


    
    return 0;
}

