#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long  n;
    cin>>n;
    if(n%10 == 9){
        cout<<"NO"<<endl;
        return;
    }
    
    long long  num = n/10;
    long long  digit = 2;
    while(num){
         digit = num % 10;
        if(digit == 0) {
            cout<<"NO"<<endl;
            return;
        }
        num = num/10;   
    }

    if(digit > 1){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;


    
     
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