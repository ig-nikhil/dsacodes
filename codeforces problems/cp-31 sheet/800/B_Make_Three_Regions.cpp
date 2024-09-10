#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string upper;
    string lower;
    cin>>upper>>lower;

    int count = 0;

 
    
    for(int i=1; i<=n-2; i++){
        if(upper[i] == '.' && lower[i] == '.' && lower[i-1] == 'x' && lower[i+1] == 'x' && upper[i-1] == '.' && upper[i+1] == '.'){
            count++;
        }
        if(lower[i] == '.' && upper[i] == '.' && upper[i-1] == 'x' && upper[i+1] == 'x' && lower[i-1] == '.' && lower[i+1] == '.'){
            count++;
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