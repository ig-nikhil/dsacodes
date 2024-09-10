#include <bits/stdc++.h>
using namespace std;

int sol(int a , int b, int c, int i){
    if(i==5){
        return a*b*c;
    }
    int x = sol(a+1,b,c,i+1);
    int y = sol(a,b+1,c,i+1);
    int z = sol(a,b,c+1,i+1);
    return max(x,max(y,z));
}

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans =  sol(a,b,c,0);
    cout<<ans<<endl;
   
     
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
