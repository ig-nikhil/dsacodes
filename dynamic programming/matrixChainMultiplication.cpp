#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int i , int j){
    if(i>=j){
        return 0;
    }
    int min = INT_MAX;
    for(int k=i; k<=j-1; k++){
        
        int temp = solve(arr,i,k) + solve(arr,k+1,j) + arr[i-1]*arr[k]*arr[j];

        if(temp<min){
            min = temp;
        }
    }

    return min;
}

int matrixMultiplication(int n, int arr[])
{
    return solve(arr,1,n-1);
}


int main()
{   
    int n = 5;
    int arr[5] = {40, 20, 30, 10, 30};
    cout<<matrixMultiplication(n,arr);
    
    return 0;
}
