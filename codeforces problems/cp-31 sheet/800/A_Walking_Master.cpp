#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int xmove = c-a;
    int ymove = d-b;

    if(ymove < 0 || xmove > ymove){
        cout<<-1<<endl;
        return;
    }
    else{
        cout<<ymove+ymove-xmove<<endl;
        return;
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
