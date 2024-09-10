#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    vector<pair<long long,long long>>v; 

    for(long long i=0; i<n; i++){long long x,y;
        cin>>x>>y;
        v.push_back({x,y});  
    }

    long long pairs = 0;
    sort(v.begin(),v.end());
    for(long long i=0; i<n-1; i++){
        long long x1 = v[i].first;
        long long y1 = v[i].second;

        long long x2 = v[i+1].first;
        long long y2 = v[i+1].second;

        if(x1 == x2){
            pairs++;
        }

    
    } 
     
    long long cnt = 0;
     for(long long i=0; i<n-2; i++){
         long long x = v[i].first;
         long long y = v[i].second;
           for(int j=i+1; j<=i+5 && j<n; j++){
                for(long long k=j+1; k<=i+5 && k<n; k++){
                    long long x1 = v[j].first;
                    long long  y1= v[j].second;
                    long long x2 = v[k].first;
                    long long y2 = v[k].second;

                   
                if(x1 == x+1 && y1 == !y && x2 == x+2 && y2 == y) cnt++;
                   
                }
        }
     }

     long long ans = pairs*(n-2)+ cnt;
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
