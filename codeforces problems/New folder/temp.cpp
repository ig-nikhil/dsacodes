#include <bits/stdc++.h>
using namespace std;


int main()
{   
    int n = 7;

    for(int i=1; i<=n; i++){
        if(i%3 == 1){
            cout<<"  *"<<endl;
        }
        else{
            cout<<"*   *"<<endl;
        }
    }
    
    return 0;
}

