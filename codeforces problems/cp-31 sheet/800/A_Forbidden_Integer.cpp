#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,x;
    cin>>n>>k>>x;
    
    if(x != 1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=0;i<n; i++){
            cout<<1<<" ";
        }
        cout<<endl;
        return;
    }
    if(k==1){
        cout<<"NO"<<endl;
        return;
    }
    if(k ==2){
        if(n%2 == 0){
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            for(int i=0; i<n/2; i++){
                cout<<2<<" ";
            }
            cout<<endl;
            return;
        }
        else {
            cout<<"NO"<<endl;
            return;
        }
    }
    if(n %2 == 0){
       cout<<"YES"<<endl;
            cout<<n/2<<endl;
            for(int i=0; i<n/2; i++){
                cout<<2<<" ";
            }
            cout<<endl;
            return; 
    }

    cout<<"YES"<<endl;
    cout<<n/2<<endl;
    cout<<3<<" ";
    for(int i=0; i<(n/2-1); i++){
        cout<<2<<" ";
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