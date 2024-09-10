#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    vector<int>mov1; 

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        mov1.push_back(temp);  
    } 

    vector<int>mov2;
        for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        mov2.push_back(temp);  
    } 

    int r1 = 0;
    int r2 = 0;

    vector<int>same;

    for(int i=0; i<n; i++){
        if(mov1[i] != mov2[i]){
            if(mov1[i] > mov2[i]){
                r1 += mov1[i];
            }
            else r2 += mov2[i];
        }
        else {
            same.push_back(mov1[i]);
        }
    }

    for(int i=0; i<same.size(); i++){
        if(r1>r2){
            if(same[i] == 1){
                r2 += 1;
            }

            else if(same[i] == -1){
                r1 += -1;
            }
        }

        else{
            if(same[i] == 1){
                r1 += 1;
            }

            else if(same[i] == -1){
                r2 += -1;
            }
        }

        }

        cout<<min(r1,r2)<<endl;
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
