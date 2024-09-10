#include <iostream>
#include <queue>
using namespace std;

int main() {
cout<<"max heap priority_queue"<<endl;
cout<<endl;
priority_queue<int>p; // based on max heap
                         // in this priority_queue when we pop the element it always pop our largest element
p.push(3);
p.push(7);
p.push(2);

cout<<"top of p is ->"<<p.top()<<endl;


p.pop();

cout<<"top of p after one pop is ->"<<p.top()<<endl;

cout<<"size of queue->"<<p.size()<<endl;
cout<<"Empty or not->"<<p.empty()<<endl;

cout<<"min heap priority_queue"<<endl;
cout<<endl;

priority_queue< int , vector<int> , greater<int> >mini ; //based of min heap
                                                         // in this priority_queue when we pop the element it always pop our smallest element 

mini.push(3);
mini.push(7);
mini.push(2);

cout<<"top of p is ->"<<mini.top()<<endl;


mini.pop();

cout<<"top of p after one pop is ->"<<mini.top()<<endl;

cout<<"size of queue->"<<mini.size()<<endl;
cout<<"Empty or not->"<<mini.empty()<<endl;

return 0;
}