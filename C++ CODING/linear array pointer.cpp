#include <iostream>
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
cout << " Array elements:" << endl;
for(int i=0;i<5;i++){
int*p=&arr[i];
cout <<*p<< endl;
}
}