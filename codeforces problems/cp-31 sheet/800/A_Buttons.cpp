#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;

    if(c%2 == 1){
        if(a>=b){
            cout<<"First"<<endl;
            return;
        }
        else{
            cout<<"Second"<<endl;
            return;
        }
    }
    else{
        if(b>=a){
            cout<<"Second"<<endl;
            return;
        }
        else{
            cout<<"First"<<endl;
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
