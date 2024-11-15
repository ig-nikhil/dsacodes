#include <bits/stdc++.h>
using namespace std;

bool istrue(double num , int n, double i){
    double val = num/i;
    for(int j=0; j<n-2; j++){
        val = val/i;
    }
    return i <= val;
}

    


int main()
{   double num;
    int n;
    cout<<"Enter the number Less than 1: ";
    cin>>num;

    cout<<"Enter the n : ";
    cin>>n;


   double lo = 0;
   double hi = 1;

   while(hi-lo >= 0.0001){
        
        double mid = lo + (hi-lo)/2;

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
