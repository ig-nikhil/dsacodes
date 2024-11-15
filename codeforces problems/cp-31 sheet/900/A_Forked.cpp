#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,x1,y1,x2,y2;
    cin>>a>>b>>x1>>y1>>x2>>y2;

    vector<int>dx = {-a,-a,a,a,-b,-b,b,b};
    vector<int>dy = {-b,b,-b,b,-a,a,-a,a};
    set<pair<int,int>>s;

    for(int i=0; i<8; i++){
        int x = x1-dx[i];
        int y = y1-dy[i];
        if( (abs(x-x2) == a && abs(y-y2) == b) || (abs(x-x2) == b && abs(y-y2) == a) ){
            s.insert({x,y});
        }
    }
    cout<<s.size()<<endl;
     
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



