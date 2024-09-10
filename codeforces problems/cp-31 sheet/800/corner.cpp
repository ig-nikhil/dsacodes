#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>&v , int n, int k, int l, int r){
    if(k == 0){
        return 0;
    }

    return max(v[l]+ solve(v,n,k-1,l+1,r) , v[r]+ solve(v,n,k-1,l,r-1));
}

int main()
{   
    
        int n = 8;
        vector<int>v = { 8, 4, 4, 8, 12, 3, 2, 9 }; 
        int k = 3;

        cout<<solve(v,n,k,0,n-1)<<endl;
        int start = n-k;
        int sum = 0;
        for(int i=start; i<n; i++){
            sum += v[i];
        }
        int maxsum = INT_MIN;

        while(start <= n){
            maxsum = max(maxsum,sum);
            sum  = sum - v[start%n];
            sum  = sum + v[(start+k)%n];
            start++;
        }
        cout<<maxsum<<endl;      

         
   
    
    return 0;
}
