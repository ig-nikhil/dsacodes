#include <bits/stdc++.h>
using namespace std;




void solve(){
    int a,b;
    cin>>a>>b;
    int cnt = 0;
    
    if(a%2 == 1){
        for(int i=a; i<=b-2; i = i+4){
            cnt++;
        }
    }
    else{
        for(int i=a+1; i<=b-2; i += 4){
            cnt++;
        }
    }

    cout<<cnt<<endl;

    

     
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
