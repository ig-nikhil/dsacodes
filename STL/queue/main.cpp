#include <iostream>
#include <queue>
using namespace std;

int main() {
    
queue<string> q;
q.push(" love");
q.push( "Kumar");
q.push("Nikhl");

cout<<"front of queue->"<<q.front()<<endl;

q.pop();

cout<<"front of queue after pop->"<<q.front()<<endl;

cout<<"size of queue->"<<q.size()<<endl;
cout<<"Empty or not->"<<q.empty()<<endl;

return 0;
}