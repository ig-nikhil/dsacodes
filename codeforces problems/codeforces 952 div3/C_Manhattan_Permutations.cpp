#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n,k;
    cin>>n>>k;
    if(k % 2 != 0){
        cout<<"NO"<<endl;
        return ;
    }

    k = k/2;
    long long x = n-1;
    vector<int>a(n+1);
    for(int i=1; i<n+1; i++) a[i] = i;

    for(int i=1; i<n+1; i++){
        if(k <= x){
            swap(a[i],a[i+k]);
            k=0;
            break;
        }

        k = k-(x);
        swap(a[i],a[i+x]);
        x = x - 2;
        if(x<=0) break;
    }

    if(k>0){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
    for(int i=1; i<n+1; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
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
