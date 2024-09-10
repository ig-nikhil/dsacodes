#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n = 5;

    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            int temp;
            cin>>temp;
            if(temp == 1){
                cout<< abs(2-i)+abs(2-j)<<endl;
                return;
            }
        }
    }
     
}


int main()
{   
    int t=1;
    
    while(t--){
        solve();
    }
    
    return 0;
}