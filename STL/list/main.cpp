/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int>l;
    
    l.push_back(1); // Enter element from back side
    l.push_front(2); // Enter element form front side
    l.push_back(3);
    l.push_front(4);
    l.push_back(5);
    
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    
    
    cout<<"l.back()->"<<l.back()<<endl;
    cout<<"d.front()->"<<l.front()<<endl;   
    
    cout<<"l is empty or not->"<<l.empty()<<endl;
    
    l.erase(l.begin()); // here we have to use pointer with respect to l.begin() or l.end()
    cout<<"after erasing element of index 1"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"size of list is : "<<l.size()<<endl;
    return 0;
}
