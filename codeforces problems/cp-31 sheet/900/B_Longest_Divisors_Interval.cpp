#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long int  n;
    cin>>n;

    int count = 0;
    long long int i = 1;
    while(true){
        if(n%i == 0){
            count++;
            i++;
        }
        else{
            break;
        }
    }

    cout<<count<<endl;
   
     
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