#include <bits/stdc++.h>
using namespace std;



int main()
{   
    int n;
    cin>>n;
    vector<int>v; 
    int x = 0;

    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        if(s == "X++" || s == "++X") x++;
        if( s== "--X" || s == "X--") x--;
    } 
    cout<<x<<endl;
    
    return 0;
}
