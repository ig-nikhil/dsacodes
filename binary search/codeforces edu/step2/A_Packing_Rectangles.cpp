#include <bits/stdc++.h>
using namespace std;
#define int long long

bool istrue(int side, int w, int h, int n){
    int rows = side/h;
    int cols = side/w;

    return rows >= n/cols + (n%cols != 0);
}


signed main()
{   
    ios::sync_with_stdio(false);
    cin.tie(0);
    int w,h,n;
    cin>>w>>h>>n;

    int ans = -1;
    int lo = max(h,w);
    int hi = n*max(h,w);

    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(istrue(mid,w,h,n)){
            ans = mid;
            hi = mid-1;
        }
        else lo = mid+1;
    }

    cout<<ans<<endl;


    
    return 0;
}

