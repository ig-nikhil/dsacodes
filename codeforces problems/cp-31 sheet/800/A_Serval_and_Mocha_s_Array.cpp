#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve(){
    int n;
    cin>>n;
    vector<int>v; 

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);  
    }
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(gcd( v[i],v[j]) <= 2){
        cout<<"YES"<<endl;
        return;
    }
   
        }
    }
    cout<<"NO"<<endl;


     
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
