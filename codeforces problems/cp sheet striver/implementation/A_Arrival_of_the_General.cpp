#include <bits/stdc++.h>
using namespace std;


int main()
{   
        int n;
        cin>>n;
        vector<int>v;

        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            v.push_back(temp);  
        }
        int miniindex = INT_MAX;
        int mini = INT_MAX;

        for(int i = n-1; i>=0; i--){
            if(mini > v[i]){
                mini = v[i];
                miniindex =  i;
            }
        }  

        int maxindex = INT_MIN;
        int maxi = INT_MIN;

        for(int i = 0; i<n; i++){
            if(maxi < v[i]){
                maxi = v[i];
                maxindex =  i;
            }
        }

        if(miniindex < maxindex ) {
            cout<<maxindex + (n-2-miniindex);
        }
        else {
            cout<<maxindex + (n-1-miniindex);
        }
    
    
    return 0;
}
