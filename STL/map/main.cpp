/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int , string>m;      // stores element key wise sorted 
    unordered_map<int,int>u; // unordered_map stores element in unordered manner
    
    m[12] = "NIkhil";
    m[2] = "abc";
    m[10] = "xyz";
    
    m.insert({4,"baby"});
    
    for(auto i:m){
        cout<<i.first<<"->"<<i.second<<endl;
    }
    
    cout<<"finding 4 ->"<<m.count(4)<<endl; // returns 0 and 1 
    cout<<"finding 5 ->"<<m.count(5)<<endl;
    
    auto it = m.find(10); // return an iterator belongs to the index that is given here "10"
    for(auto i=it; i!=m.end(); i++){
        cout<< (*i).first <<endl;
    }
    
    if(m.find(11) != m.end()){  // used to check that element present or not
        cout<<"present"<<endl;
    }
    
    else{
        cout<<"absent"<<endl;
    }


    return 0;
}
