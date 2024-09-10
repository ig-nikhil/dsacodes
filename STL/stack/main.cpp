#include <iostream>
#include <stack>
using namespace std;

int main() {
stack<string> s;
s.push(" love");
s.push( "Kumar");
s.push("Nikhl");

cout<<"Top of stack->"<<s.top()<<endl;

s.pop();

cout<<"Top of stack->"<<s.top()<<endl;

cout<<"size of stack->"<<s.size()<<endl;
cout<<"Empty or not->"<<s.empty()<<endl;

return 0;
}