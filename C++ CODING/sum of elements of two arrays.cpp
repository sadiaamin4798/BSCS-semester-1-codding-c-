#include<iostream>
using namespace std;
int main(){
int size;
cout << "Enter size: " << endl;
cin >> size;
int arr1[size],arr2[size];
cout << "Enter array1 elemens: " << endl;
for(int i=0;i<=size;i++){
cin >> arr1[i];}
cout << "Enter array2 elemens: " << endl;
for(int i=0;i<=size;i++){
cin >> arr2[i];}
int sum[size];
for(int i=0;i<=size;i++){
sum[i]=arr1[i]+arr2[i];
}
cout << "Displaying sum: " << endl;
for(int i=0;i<=size;i++){
cout <<sum[i]<< endl;
}
}