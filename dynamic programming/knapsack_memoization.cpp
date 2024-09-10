#include <bits/stdc++.h>
using namespace std;

const int ROWS = 100;
const int COLS = 1000;

int knapsack(int wt[],int val[],int W, int n,int t[ROWS][COLS]){
    if(W==0 || n==0){
        return 0;
    }

    if(t[n][W]!=-1){
        return t[n][W];
    }

    if(wt[n-1]<=W){
        t[n][W] =  max((val[n-1]+knapsack(wt,val,W-wt[n-1],n-1,t)) , (knapsack(wt,val,W,n-1,t)));
    }

    else{
         t[n][W] =  knapsack(wt,val,W,n-1,t);
    }

    return t[n][W];
}

int main()
{
    int t[ROWS][COLS];
    memset(t, -1, sizeof(t));

    int wt[] = {1, 3, 4, 5};
    int val[] = {2, 4, 5, 7};
    int n = 4;
    int W = 9;

    int maxValue = knapsack(wt,val,W,n,t);
    cout<<maxValue<<endl;

    return 0;
}
