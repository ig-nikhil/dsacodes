#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int cnt1 = 0;
    int cntminus1 = 0;

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        if(temp == 1) cnt1++;
        else cntminus1++;
    }

    double req = cntminus1 - cnt1;
    if(req <= 0){
        if(cntminus1 % 2 == 0){
            cout<<0<<endl;
            return;
        }
        else{
            cout<<1<<endl;
            return;
        }
    }
    else{
        req = ceil(req/2);
        if((cntminus1 - int(req)) % 2 == 0){
            cout<<req<<endl;
            return;
        }
        else{
            cout<<req + 1<<endl;
            return;
        }
    }
    


     
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
