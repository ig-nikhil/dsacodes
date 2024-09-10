#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>&arr, int S,int idx, int sum){
    if(idx == arr.size()){

        if(sum == S){
            return 1;
        }
        return 0;     
    }


    // take the idx element a
    int l = solve(arr,S,idx+1,sum+arr[idx]);


    // not take the idx element 
    int r = solve(arr,S,idx+1,sum);

    return l+r;
}

int main()
{ 
    
    vector<int>arr = {1,3,2,4};
    int S = 11;
    cout<<solve(arr,S,0,0)<<endl;
    return 0;
}
