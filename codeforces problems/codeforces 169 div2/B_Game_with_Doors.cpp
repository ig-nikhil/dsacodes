#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(c<a){
        swap(a,c);
        swap(b,d);
    }

    int dist = b-c;

    if(b-c < 0){
        cout<<1<<endl;
    }
    else{
        int count = 0;
        if(a == c) count++;
        if(b == d) count++;

        if(b<=d){
            cout<<b-c+2-count<<endl;
        }
        else{
            cout<<d-c+2-count<<endl;
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