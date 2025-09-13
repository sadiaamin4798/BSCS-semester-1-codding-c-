#include <iostream>
using namespace std;
int sum(int *a, int *b){
int c=(*a) + (*b);
return c;
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
cout << "sum=" <<sum(&a,&b)<< endl;

}