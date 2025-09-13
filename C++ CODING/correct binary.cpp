#include<iostream>
using namespace std;
int main(){
int i=1,binary=0, remainder ,num;
cout << "Enter number: " << endl;
cin >> num;
while(num!=0){
remainder =num%2;
binary =binary +remainder *i;
num=num/2;
i=i*10;
}
cout << "binary=" <<binary<< endl;
}
