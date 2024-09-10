#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,l,r;
    cin>>n>>l>>r;
    vector<int>v; 

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);  
    } 

    int sum = v[0];
    int count = 0;
    int i=0, j=0;

    while(j<n){

        if(sum>= l && sum <= r){
            count++;
            i = j+1;
            j= j+1;
            sum = v[i];
        }

        else if(sum < l){
            j++;
            sum += v[j];
        }

        else if ( sum > r){
            sum = sum - v[i];
            i++;
        }

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
