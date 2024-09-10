/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;


void insertionSort(vector<int>&arr , int n){
    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(key<arr[j] && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1] = key;
    }
}



int main()
{
    vector<int>arr = {-10,2,5,1,9,7};
    insertionSort(arr,6);
    for(int i = 0; i<6 ;i++){
        cout<<" "<<arr[i];
    }

    return 0;
}
