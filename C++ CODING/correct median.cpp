#include<iostream>
#include<string>
using namespace std;
int main(){
float sum=0.0;
int n;
cout << "enter size: " << endl;
cin>>n;
int arr[n];
cout<<"ENter array elements"<<endl;
for(int i=0; i<n; i++){
cin>>arr[i];
}
if(arr[n]%2==0){
cout<<"even array: "<<endl;
sum=arr[n/2]+arr[n/2 - 1];
float median=sum/2;
cout<<median;
}

else{
cout<<"odd array:"<<endl;
float median=arr[n/2];
cout<<"median="<<median;
}
}
