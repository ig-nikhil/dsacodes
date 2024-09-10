#include <bits/stdc++.h>
using namespace std;


int main()
{   
    int t;
    cin>>t;
    int sum = 0;
    for(int i=0; i<t; i++){
        string temp;
        cin>>temp;
        if(temp == "Icosahedron") sum += 20;
        if(temp == "Dodecahedron") sum += 12;
        if(temp == "Octahedron") sum += 8;
        if(temp == "Cube" ) sum += 6;
        if(temp == "Tetrahedron" ) sum += 4;
    }
    cout<<sum;
    
    return 0;
}
