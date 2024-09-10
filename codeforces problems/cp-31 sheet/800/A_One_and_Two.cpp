#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v;
    int count2 = 0;

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
        if(temp == 2) count2++; 
    }
    int cnt2 = 0;

    for(int i=0; i<n-1; i++){
        if(v[i] == 2){
            cnt2++;
            count2--;
        }
         

        if(cnt2 == count2){
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<-1<<endl; 
     
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
