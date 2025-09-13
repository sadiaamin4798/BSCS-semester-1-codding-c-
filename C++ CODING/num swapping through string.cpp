#include<iostream>
#include<string> 
using namespace std;
int main(){
string num1="123";
string num2="456";
cout << "before swapping: " << endl;
cout << num1<< endl<<num2<<endl;
string swap=num1;
num1=num2;
num2=swap;
cout << "after swapping: " << endl;
cout << num1<< endl<<num2<<endl;
	return 0;
}