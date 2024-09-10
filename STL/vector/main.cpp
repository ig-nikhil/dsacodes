/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v;
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    
    for(int i:v){
        cout<<i<<" ";
    }
    cout << endl;
    cout<<"size->"<<v.size()<<endl;         // size is the acutal no of elements presents in the vector
    cout<<"capacity->"<<v.capacity()<<endl; // capacity is going double with increasing size in order to fullfill requirments



    vector<int>a(6,1); // this declaration create an vector of size 6 and intialize each element with 1
    for(int i:a){
        cout<<i<<"";
    }
    cout<<endl;
    cout<<"size->"<<a.size()<<endl;
    cout<<"capacity->"<<a.capacity()<<endl;
    
    vector<int>c(v);  // if we put another vector in declaration the new vector "c" copied the vector "v"
    for(int i:c){
        cout<<i<<"";
    }
    

    return 0;
}
