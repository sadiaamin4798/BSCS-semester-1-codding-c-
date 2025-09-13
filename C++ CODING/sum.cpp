#include<iostream>
using namespace std ;
int main(){
float no,sum=0.0;
do{
cout << "enter num" << endl;
cin >> no;
sum=sum+no;
}while(no!=0.0);
{
cout << "total sum" << sum<<endl;
}
}