#include <iostream>
#include<stack>
using namespace std;
int main(){
stack<int>n;
n.push(1);
n.push(2);
n.push(3);
n.push(4);
n.push(5);
cout << "size of stack: " <<n.size() <<endl;
cout << "Element of stack: " << endl;
cout <<n.top() << endl;
n.pop();
cout <<n.top() << endl;
n.pop();
cout <<n.top() << endl;
n.pop();
cout <<n.top() << endl;
n.pop();
cout <<n.top() << endl;
n.pop();
cout << "is stack empty? " <<n.empty()<< endl;
}
