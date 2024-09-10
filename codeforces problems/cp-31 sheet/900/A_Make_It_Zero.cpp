#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v; 

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);  
    }

    if(n%2 == 0){
        cout<<2<<endl;
        cout<<1<<" "<<n<<endl; 
        cout<<1<<" "<<n<<endl; 
    }
    else{
     cout<<4<<endl;
     cout<<1<<" "<<n-1<<endl;
     cout<<1<<" "<<n-1<<endl;
     cout<<n-1<<" "<<n<<endl;
     cout<<n-1<<" "<<n<<endl;

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