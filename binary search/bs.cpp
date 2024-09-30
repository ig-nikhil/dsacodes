#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int>v, int key){
    int l = 0;
    int r = v.size()-1;
    int mid; 

    while(l<=r){
        mid = l+ (r-l)/2;
        if(v[mid] == key) return mid;
        else if(v[mid] > key) r = mid-1;
        else l = mid+1;
    }
    return -1;
}



int main()
{   
 
    vector<int>v = {1,2,3,4,5,6,7,8,9,10};
    int key;
    cin>>key;
    int idx = binary_search(v,key);
    cout<<idx<<endl;
    
    return 0;
}
