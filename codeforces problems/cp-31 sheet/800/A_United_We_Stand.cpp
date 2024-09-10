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
    vector<int>b;
    vector<int>c;
    sort(v.begin(),v.end());
    b.push_back(v[0]);
    int i=1;
    while(i<n){
        if(v[i] == v[0]){
            b.push_back(v[i]);
            i++;
        }
        else{
            break;
        }
    }

    while(i<n){
        c.push_back(v[i]);
        i++;
    }
    if(c.size() == 0){
        cout<<-1<<endl;
        return;
    }
    cout<<b.size()<<" "<<c.size()<<endl;
    for(auto i:b){
        cout<<i<<" ";
    } 
    cout<<endl;
    for(auto i:c){
        cout<<i<<" ";
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