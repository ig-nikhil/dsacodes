#include <bits/stdc++.h>
using namespace std;



int binary_search(vector<int>v, int key){
    int ans = -1;
    int l = 0;
    int r = v.size()-1;
    int mid; 

    while(l<=r){
        mid = l+ (r-l)/2;
        if(v[mid] == key){
            ans = mid;
            r = mid-1; // for first occurence 
        }
        else if(v[mid] > key) r = mid-1;
        else l = mid+1;
    }
    return ans;
}

// if we want to calculalte last occurence then instead of r = mid -1 we can do l = mid + 1;
// for no of occurence we can do : (last_occ - first_occ + 1)       


int main()
{   
 
    vector<int>v = {1,2,3,3,3,3,7,8,9,9};
    int key;
    cin>>key;
    int idx = binary_search(v,key);
    cout<<"first occurence at index : "<<idx<<endl;
    
    
    return 0;
}
