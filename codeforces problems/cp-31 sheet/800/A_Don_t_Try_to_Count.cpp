#include <bits/stdc++.h>
using namespace std;
bool checkSubstring(string str, string s) {
    // Use find method to check if s is a substring of str
    return str.find(s) != string::npos;
}

void solve(){
    int n,m;
    cin>>n>>m;
    string str,s;
    cin>>str>>s;


    for(int i =0; i<=5; i++){
        if(checkSubstring(str,s)){
         cout<<i<<endl;
         return;
        }
        else{
            str = str + str;
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