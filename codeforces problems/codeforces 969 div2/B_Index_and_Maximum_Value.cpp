#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,m;
    cin>>n>>m;
   long long maxi = 0;

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        if(maxi < temp){
            maxi = temp;
        }
    }

    for(int i=0; i<m; i++){
        char c;
        int l,r;
        cin>>c>>l>>r;
        if(c == '+'){
            if(maxi >= l && maxi <= r) cout<<++maxi<<" ";
            else cout<<maxi<<" ";
        }
        else{
            if(maxi >= l && maxi <= r) cout<<--maxi<<" ";
            else cout<<maxi<<" ";
        }

    } 
    cout<<endl;
     
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
