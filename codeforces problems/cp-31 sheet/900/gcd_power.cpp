#include <bits/stdc++.h>
using namespace std;

int gcd_power(int a, int b, int m){
    if(b == 0) return 1;
    if(b%2 == 0){ 
        return (((gcd_power(a,b/2,m))%m)*((gcd_power(a,b/2,m))%m))%m;
    }
    else{
        return ((a%m)*((gcd_power(a,(b-1)/2,m))%m)*((gcd_power(a,(b-1)/2,m))%m))%m;
    }
}


int main()
{   
    int a, b, m;
    cin>>a>>b>>m;

    cout<<gcd_power(a,b,m)<<endl;
    
    return 0;
}