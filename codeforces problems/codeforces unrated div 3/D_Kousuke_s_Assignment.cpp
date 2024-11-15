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

    int sum = 0;
    int ans = 0;
    set<int>st;
    st.insert(0);

    for(int i=0; i<n; i++){
         sum += v[i];
        if(st.find(sum) != st.end()){
            ans++;  
            st.clear();
            st.insert(0);
            sum = 0;
        }
        else{
            st.insert(sum);
        }
    }

    cout<<ans<<endl; 
     
}


int main()
{   
     ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}
