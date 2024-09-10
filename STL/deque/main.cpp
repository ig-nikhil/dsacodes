/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int>d;
    
    d.push_back(1); // Enter element from back side
    d.push_front(2); // Enter element form front side
    d.push_back(3);
    d.push_front(4);
    d.push_back(5);
    
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"Element at  first index is : "<<d.at(1)<<endl;
    cout<<"Element at  first index is : "<<d[1]<<endl;
    
    cout<<"d.back()->"<<d.back()<<endl;
    cout<<"d.front()->"<<d.front()<<endl;   
    
    cout<<"d is empty or not->"<<d.empty()<<endl;
    
    d.erase(d.begin()+1,d.begin()+3); // here we have to use pointer with respect to d.begin() or d.end()
    cout<<"after erasing element of index form 1 to 3"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}
