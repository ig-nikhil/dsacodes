#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int>&arr, vector<int>&ds, int idx, int sum){
    if(idx == arr.size()){
        int currsum = 0;
        for(auto i:ds){
            currsum += i;
        }
        // condition satisfied
        if(currsum == sum){
            for(auto i:ds){
                cout<<i<<" ";
            }
            cout<<endl; 
            return true;
        }
        //conditon not satisfied
        else return false;     
    }


    // take the idx element and store in ds
    ds.push_back(arr[idx]);
    if(solve(arr,ds,idx+1,sum) == true){
        return true;
    }

    ds.pop_back();

    // not take the idx element 
    if(solve(arr,ds,idx+1,sum) == true){
        return true;
    }

    return false;
}

int main()
{ 
    
    vector<int>arr = {1,3,2,4};
    vector<int>ds = {};
    int S = 3;
    solve(arr,ds,0,S);
    return 0;
}
