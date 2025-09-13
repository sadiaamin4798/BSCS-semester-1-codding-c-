#include <iostream>
using namespace std;

int main() {
int a,b;
    cout << "Enter first number:" << endl;
    cin>>a;
    cout << "Enter second number:" << endl;
    cin>>b;
    cout << "1.   addition" << endl;
    cout << "2.   subtraction" << endl;
    cout << "3.   multiplication" << endl;
    cout << "4.   division" << endl;
    cout << "5.   modulus" << endl;
    int ch;
    cout << "Enter choice:" << endl;
    cin >> ch;
    switch (ch){
    case 1:
    {cout <<"addition="<< a+b << endl;
    break;}
    case 2:
    {cout <<"subtraction="<< a-b << endl;
    break;}
    case 3:
    {cout <<"multiplication="<< a*b << endl;
    break;}
    case 4:
    {cout <<"division=" <<a/b << endl;
    break;}
    case 5:
    {cout << "mudulus="<<a%b << endl;
    break;}
    }
}