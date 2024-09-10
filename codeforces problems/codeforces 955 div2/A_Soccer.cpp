#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    if(x1>y1 && x2>y2){
        cout<<"YES"<<endl;
    }

    else if(x1<y1 && x2<y2){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
