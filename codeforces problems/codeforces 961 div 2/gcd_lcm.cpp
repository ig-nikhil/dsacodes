#include <bits/stdc++.h>
using namespace std;

// gcd iterative calculation
int gcd_i(int a , int b){
    if(a == 0 || b == 0) return max(a,b);
    int rem = a%b;
    while(rem != 0){
        int temp = rem;
        rem = b%rem;
        b = temp;
    }
    return b;
}

// gcd recursive calculation

int gcd_r(int a, int b){
    if(b == 0) return a;
    return gcd_r(b,a%b);
}

int lcm(int a, int b){
    return a*b/(gcd_r(a,b));
}


int main()
{   
    int a , b;
    cin>>a>>b;
    cout<<gcd_i(a,b)<<endl;
    cout<<gcd_r(a,b)<<endl;
    cout<<lcm(a,b)<<endl;
    
    return 0;
}
