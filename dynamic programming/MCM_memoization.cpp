#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int i , int j,vector<vector<int>>&t){
    if(i>=j){
        return 0;
    }
    if(t[i][j]!=-1){
        return t[i][j];
    }
    int min = INT_MAX;
    for(int k=i; k<=j-1; k++){
        
        int temp = solve(arr,i,k,t) + solve(arr,k+1,j,t) + arr[i-1]*arr[k]*arr[j];

        if(temp<min){
            min = temp;
        }
    }

    return t[i][j] =min;
}

int matrixMultiplication(int n, int arr[])
{
    vector<vector<int>>t(n,vector<int>(n,-1));
    return solve(arr,1,n-1,t);
}


int main()
{   
    int n = 5;
    int arr[5] = {40, 20, 30, 10, 30};
    cout<<matrixMultiplication(n,arr);
    
    return 0;
}
