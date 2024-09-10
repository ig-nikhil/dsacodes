#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&arr, int idx , vector<int>&a, vector<int>&b, int &ans){
    if(idx == arr.size()){
        ans = ans + 1;
        cout<<ans<<endl;
        for(auto i:a){
            cout<<i<<" ";
        }
        cout<<endl;
        for(auto i:b){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }

    for(int i=0; i<=arr[idx]; i++){
        int num1 = i;
        int num2 = arr[idx]-i;
        if(a.size() == 0 && b.size() == 0){
            a.push_back(num1);
            b.push_back(num2);
            solve(arr,idx+1,a,b,ans);
            a.pop_back();
            b.pop_back();
        }
        else{
            if(a[a.size()-1] <= num1 && b[b.size()-1] >= num2){
                a.push_back(num1);
                b.push_back(num2);
                solve(arr,idx+1,a,b,ans);
                a.pop_back();
                b.pop_back();
            }
           
        }
    }
}

int main()
{   
    vector<int>arr = {1,3,4};
    int ans = 0;
    vector<int>a;
    vector<int>b;
    


    solve(arr,0,a,b,ans);

    cout<<"ans is : "<<ans<<endl;
    
    return 0;
}
