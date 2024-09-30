#include <bits/stdc++.h>
using namespace std;


int main()
{   
   vector<int>arr =  {7,1,4,3,20,6};
   int  k = 3;
   priority_queue<int,vector<int>,greater<int>>min_heap;

   for(int i=0; i<arr.size(); i++){
        int curr = arr[i];
        if(min_heap.size() >= k){
            int top_element = min_heap.top();
            if(curr > top_element){
                 min_heap.pop();
                 min_heap.push(curr);
            }
            
        }
        else{
            min_heap.push(curr);
        }
        
   }

   cout<<min_heap.top()<<endl;
    
    return 0;
}
