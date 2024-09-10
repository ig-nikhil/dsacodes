/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;


int main()
{

    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,m;
        cin>>n>>m;
        string a,x = "ABCDEFG";
        cin>>a;
        int ans = 0;
        for(int i=0; i<7; i++){
            int count = 0;
            for(int j=0; j<n; j++){
                if(x[i] == a[j]){
                    count++;
                    if(count == m){
                        break;
                    }
                }
            }
            
            ans += m-count;
        }
        
        
        cout<<ans<<endl;
    }

    return 0;
}
