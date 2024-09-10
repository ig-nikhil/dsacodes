/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,f,k;
        cin>>n>>f>>k;
        vector<int> v;
        int fav;
        
        for(int i=0; i<n ;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        
        fav = v[f-1];
           
         if(k==n){
            cout<<"YES"<<endl;
            continue;
        }
        
        sort(v.begin(), v.end());
        
        
        int count=0;
        for(int i=v.size()-1; i>=(v.size()-k); i--){
            if(v[i] == fav ){
                count++;
            }
        }
        
        if(count == 0){
            cout<<"NO"<<endl;
        }
     
        
        else if(count>=1){
            if(v[v.size()-k -1] == fav){
                cout<<"MAYBE"<<endl;
            }
            
            else{
                cout<<"YES"<<endl;
            }
       
        }
        
    }

    return 0;
}
