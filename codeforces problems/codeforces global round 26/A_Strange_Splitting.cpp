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

    int blue = -1;
    int x = n-1;
    for(int i=0; i<n-1; i++){
        if(v[i] != v[i+1]){
            blue = 1;
        }
        else {
            x = i;
        }
    }

    if(blue == -1){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    string ans = "";



    for(int i=0; i<n; i++){
        if(i==x) ans += 'B';
        else ans += 'R';
    }
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
