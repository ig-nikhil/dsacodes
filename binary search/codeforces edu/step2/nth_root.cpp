#include <bits/stdc++.h>
using namespace std;

bool istrue(int num , int n, double i){
    double val = num/i;
    for(int j=0; j<n-2; j++){
        val = val/i;
    }
    return i <= val;
}

    


int main()
{   
   double num = 7;
   int n = 2;

   double lo = 0;
   double hi = num;

   while(hi-lo >= 0.0001){
        
        double mid = lo + (hi-lo)/2;
        //cout<<mid<<endl;
        if(istrue(num,n,mid)){
            lo = mid;
        }
        else{
            hi = mid;
        }
   }

   cout<<fixed<<setprecision(4)<<lo<<endl;


   
    return 0;
}
