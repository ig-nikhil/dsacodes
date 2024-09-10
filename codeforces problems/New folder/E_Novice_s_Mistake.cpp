#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    if(n==1){
        cout<<9999<<endl;
        for(int i=1; i<10000; i++){
            cout<<i+1<<" "<<i<<endl;
        }
        return;
    }
    vector<pair<long long , long long >>ans;

    long long a = 0 , b = 0;
    long long p = 0;
    int nu = n;
    while(nu){
        nu = nu/10;
        p++;
    }
   
    long long d = p*2-1;

    while(a<=10000){
        string temp = to_string(n);
        string str = "";
        
        while (str.size() < d) {
            for (int j = 0; j < temp.size() && str.size() < d; j++) {
                str += temp[j];
            }
        }

        
        if(str.size() > 6) break;
        long long num = stoll(str);
        int x;

       // cout<<"value of d and num is : "<<d<<" "<<num<<endl;
        if((num-d) % (n-p) == 0){
            a = (num-d)/(n-p);
            b = (p*a-d);
            if(a>10000) break;
            if(a != 1) ans.push_back({a,b});
        }
        d = d+1;
    }
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
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