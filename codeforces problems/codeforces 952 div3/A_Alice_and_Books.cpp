#include <bits/stdc++.h>
using namespace std;


int main()
{   
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int>v;

        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            v.push_back(temp);  
        }
        int smax = INT_MIN;
        int max = INT_MIN;
        int maxindex = -1;

        for(int i=0; i<n; i++){
            if(max<v[i]){
                smax = max;
                max = v[i];
                maxindex = i;
            }
        }  

        if(maxindex != n-1){
            cout<<max+v[n-1]<<endl;
        }
        else{
            cout<<max+smax<<endl;
        }
    }
    
    return 0;
}
