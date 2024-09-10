#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&arr, vector<int>&ds, int idx, int sum){
    if(idx == arr.size()){
        int currsum = 0;
        for(auto i:ds){
            currsum += i;
        }
        if(currsum == sum){
            for(auto i:ds){
                cout<<i<<" ";
            }
            cout<<endl; 
        }
        return ;     
    }


    // take the idx element and store in ds
    ds.push_back(arr[idx]);
    solve(arr,ds,idx+1,sum);

    ds.pop_back();

    // not take the idx element 
    solve(arr,ds,idx+1,sum);
}

int main()
{ 
    
    vector<int>arr = {1,3,2,4};
    vector<int>ds = {};
    int S = 4;
    solve(arr,ds,0,S);
    return 0;
}
