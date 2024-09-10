#include <bits/stdc++.h>
using namespace std;

void solve(){
    int k,x;
    cin>>x>>k;
    
    if(k > x || x%k != 0){
        cout<<1<<endl;
        cout<<x<<endl;
        return;
    }

    for(int i=1; i<=x; i++){
        int num1 = x-i;
        int num2 = i;
        if(num1 % k != 0 && num2 % k != 0){
            cout<<2<<endl;
            cout<<num1<<" "<<num2<<endl;
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
