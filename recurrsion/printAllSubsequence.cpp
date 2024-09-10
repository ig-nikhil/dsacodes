#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&arr, vector<int>&ds, int idx){
    if(idx == arr.size()){
        for(auto i:ds){
            cout<<i<<" ";
        }
        cout<<endl;
        return ;
    }
    // take the idx element and store in ds
    ds.push_back(arr[idx]);
    solve(arr,ds,idx+1);

    ds.pop_back();

    // not take the idx element 
    solve(arr,ds,idx+1);
}

int main()
{ 
    
    vector<int>arr = {1,3,2,4};
    vector<int>ds;
    solve(arr,ds,0);
    return 0;
}
