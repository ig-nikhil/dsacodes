#include <bits/stdc++.h>
using namespace std;

bool sortByValue(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.second > b.second;
}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans = ""; 
    unordered_map<char,int>mpp;
    for(char c : s){
        mpp[c]++;
    }

    std::vector<std::pair<char, int>> temp(mpp.begin(), mpp.end());


    std::sort(temp.begin(), temp.end(), sortByValue);

    string str = "";
    for(auto i:temp){
        for(int j=0; j<i.second; j++){
            str += i.first;
        }
    }

    if(n%2 == 0){
        
    for(int i=0; i<n/2; i++){
        ans += str[i];
        ans += str[n-i-1];
    }
    }
    else{
        
    for(int i=0; i<=n/2; i++){
        ans += str[i];
        if(i != n-1-i)ans += str[n-i-1];
    }
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
