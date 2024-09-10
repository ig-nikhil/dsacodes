#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;

    int i=0, j=n-1;

    int count = n;

    while(i<j && str[i] != str[j]){
        i++;
        j--;
        count -= 2;
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