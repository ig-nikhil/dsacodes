#include <bits/stdc++.h>
using namespace std;



int main()
{
  
   

    int wt[] = {1, 3, 4, 5};
    int val[] = {2, 4, 5, 7};
    int n = 4;
    int W = 7;

    int t[n+1][W+1];
    for(int i=0; i<n+1; i++){
        for(int j=0; j<W+1; j++){
            if(i==0 || j==0){
                t[i][j] = 0;
            }
        }
    }

    for(int i=1; i<n+1; i++){
        for(int j=1; j<W+1; j++){
            if(wt[i-1]<=j){
                t[i][j] = max((val[i-1]+t[i-1][j-wt[i-1]])  ,  (t[i-1][j]));
            }

            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    

    int maxValue = t[n][W];
    cout<<maxValue;

    return 0;
}
