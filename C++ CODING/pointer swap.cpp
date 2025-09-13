#include <iostream>
using namespace std;
int swap(int *a, int *b){
int c=*a;
*a= *b;
*b=c;
cout << "Numbers after swapping: " << endl;
cout << *a << *b<<endl;
}
int main() {
/*int a=5;
int *p=&a;
*p=7;
cout <<"value:"<<a << endl;
cout <<"address" <<&a << endl;
cout <<"address" <<p << endl;
cout <<"value:"<<*p<< endl;*/
int a,b;
cout << "Enter 1st number:" << endl;
cin>>a;
cout << "Enter 2nd number:" << endl;
cin>>b;
cout << "Numbers before swapping:" << endl;
cout << a << b<<endl;
swap(&a,&b);

}