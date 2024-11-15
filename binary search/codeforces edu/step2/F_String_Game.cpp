#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

bool isSubsequence(string& p, string& str) {
    int j = 0; 
    for (int i = 0; i < str.size() && j < p.size(); i++) {
        if (str[i] == p[j]) {
            j++;
        }
    }
    return j == p.size(); 
}

bool istrue(int mid, string t, string p, vector<int>&v){
    string str = "";
    vector<int>temp;
    for(int i=mid+1; i<v.size(); i++){
        temp.push_back(v[i]-1);
    }
    sort(temp.begin(),temp.end());

    for(int i=0; i<temp.size(); i++){
        str += t[temp[i]];
    }   

    return isSubsequence(p,str);
    
}

void solve(){
    string t,p;
    cin>>t>>p;

    vector<int>v(t.size());
    for(int i=0; i<t.size(); i++) cin>>v[i]; 

    int lo = 0; 
    int hi = t.size()-1;

    int ans = -1;

    while(hi >= lo){
        int mid = lo + (hi-lo)/2;

        if(istrue(mid,t,p,v)){
            ans = mid;
            lo = mid+1;
        }
        else hi = mid-1;    
    }

    cout<<ans+1<<endl;


     
}


signed main()
{   
ios::sync_with_stdio(false);
cin.tie(0);
    int t = 1;
    
    while(t--){
        solve();
    }
    
    return 0;
}
