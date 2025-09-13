#include<iostream>
#include<iomanip>
using namespace std;
int main(){
cout<<fixed<<setprecision(1);
int a=4	;
	int b=5;
	cout<<a/b<<endl;
	cout<<(double)a/b<<endl;
	cout<<a/(double)b<<endl;
	double x=5.5; double y=6.6;
	float c=x+y;
	cout<<"Explicitly typecast: "<<(int)x/y<<endl;
	cout<<"Explicitly typecast: "<<x/(int)y<<endl;	
	cout<<"Explicitly typecast: "<<(int)(x/y)<<endl;
	cout<<"sum"<<c;
}