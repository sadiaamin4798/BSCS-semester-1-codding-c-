#include<iostream>
using namespace std;
int main(){
int size;
cout << "Enter size: " << endl;
cin >> size;
int arr[size];
cout << "Enter array elemens: " << endl;
for(int i=0;i<=size;i++){
cin >> arr[i];}
cout << "Displaying array elemens: " << endl;
for(int i =0;i<=size;i++){
cout << arr[i]<<endl;
}
}