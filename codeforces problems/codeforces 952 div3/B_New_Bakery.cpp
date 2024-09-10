#include <bits/stdc++.h>
using namespace std;


int main()
{   
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long n,a,b;
        cin>>n>>a>>b;

        
        if(b>a){
            long long  sum = 0;
            long long j = min(b-a,n);
            long long s = (b*(b+1))/2;
            long long p = ((b-j)*(b-j+1))/2;
            sum += s-p;
            sum += (n-j)*a;
            cout<<sum<<endl;
        }
        else{
            cout<<a*n<<endl;
        }
    
         
    }
    
    return 0;
}
