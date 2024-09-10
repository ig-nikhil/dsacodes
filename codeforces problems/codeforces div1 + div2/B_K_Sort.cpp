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
     
    long long ans = 0;
    long long max = v[0];

    vector<long long>x;

    for(int i=1; i<v.size(); i++){
        if(v[i] < max){
            ans = max - v[i];
            x.push_back(ans);
        }
        else {
            max = v[i];
        }
    }

    sort(x.begin(),x.end());

    long long prev = 0;
    for(int i=0; i<x.size(); i++){
        x[i]  = x[i]-prev;
        prev += x[i];
    }
    long long a = 0;
    long long y  = x.size()+1;
    for(int i=0; i<x.size(); i++){
        a += y*x[i];
        y--;
    }
 

    cout<<a<<endl;
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
