#include <bits/stdc++.h>
using namespace std;
#define int long long

bool istrue(int mid, int n, int x, int y){

    return n <= ((mid)/x + (mid)/y + 1);
}


signed main()
{   
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,x,y;
    cin>>n>>x>>y;

    int ans = -1;
    int lo = 0;
    int hi = 1e9+1;

    while(lo+1<hi){
        int mid = lo + (hi-lo)/2;
        if(istrue(mid,n,x,y)){
            ans = mid;
            hi = mid;
        }
        else lo = mid;
    }

    cout<<min(x,y)+ans<<endl;


    
    return 0;
}

