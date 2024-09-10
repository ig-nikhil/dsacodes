#include<bits/stdc++.h>

using namespace std;

void checknode(int a, int b, set<pair<int,int>>&s){
    if(s.find({a,b}) != s.end()) return;
    if(a == -1 || b == -1) return;
    int node;
    cout<<"? "<<a<<" "<<b<<endl;
    cout.flush();
    cin>>node;
    if(node == a){
        s.insert({a,b});
        return;
    }
    else{
        checknode(a,node,s);
        checknode(node,b,s);
    }
}

void solve(){
    int n; 
    cin>>n;
    set<pair<int,int>>s;

    /*
    for(int i=n; i>=2; i--){
        if(s.size() == n-1) break;
        checknode(1,i,s);   
    }
    */

    int i=1, j=n; 

    while(i<n){
        int node;
        cout<<"? "<<i<<" "<<j<<endl;
        cout.flush();
        cin>>node;

        if(node == i){
            s.insert({i,j});
            i++;
            j=n;
        }
        else{
            j=node;
        }
    }


    cout<<"! ";
    for(auto i:s){
        cout<<i.first<<" "<<i.second<<" ";
    }
    cout<<endl;
    cout.flush();
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}