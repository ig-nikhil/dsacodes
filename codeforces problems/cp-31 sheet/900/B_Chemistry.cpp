#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    unordered_map<char,int>mpp;
    for(int i=0; i<n; i++){
        mpp[s[i]]++;
    }
    
    int odd_freq = 0;
    int even_freq = 0;

    for(auto i:mpp){
        if(i.second % 2 == 0) even_freq++;
        else odd_freq++;
    }

    if((n-k)&1){
        // odd palindrome
        if(odd_freq > k+1){
            cout<<"NO"<<endl;
            return;
        }
        if(odd_freq == k+1){
            cout<<"YES"<<endl;
            return;
        }
        int diff = k-odd_freq;
        if(diff % 2 == 0){
            cout<<"NO"<<endl;
            return;
        }
        cout<<"YES"<<endl;
        
    }
    else{
        if(k >= odd_freq){
            int diff = k-odd_freq;
            if(diff % 2 == 0){
            cout<<"YES"<<endl;
            return;
        }
        cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
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