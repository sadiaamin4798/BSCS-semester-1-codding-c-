#include<iostream>
using namespace std;
int main(){
int arr[2][2]={{1,2},{3,4}}; 
int(*p)[2][2]=&arr;
cout << "Array elements through*p: " << endl;
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
cout << (*p)[i][j] <<" ";
}cout << endl;
}
cout << "Array elements through arr: " << endl;
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
cout << arr[i][j] <<" ";
}cout << endl;
}
cout << "Array elements address through &p: " << endl;
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
cout << &p[i][j] << endl;
}
}
cout << "Array elements address through p: " << endl;
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
cout << p[i][j] << endl;
}
}

}