#include <bits/stdc++.h>
using namespace std;


int main()
{   
   vector<int>arr =  {6,5,3,2,8,10,9};
   int  k = 3;
   vector<int>sorted_arr;
   priority_queue<int,vector<int>,greater<int>>min_heap;

   for(int i=0; i<arr.size(); i++){
        int curr = arr[i];
        min_heap.push(curr);
        if(min_heap.size() > k){
            sorted_arr.push_back(min_heap.top());
            min_heap.pop();
        }
        
   }

    while(!min_heap.empty()){
        sorted_arr.push_back(min_heap.top());
        min_heap.pop();
    }

    for(auto i:sorted_arr){
        cout<<i<<" ";
    }
   
    
    return 0;
}