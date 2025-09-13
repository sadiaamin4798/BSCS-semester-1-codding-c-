#include <iostream>
using namespace std;

int main() {
int arr[2][4]={{1,2,3,4},{5,6,7,8}};
/*cout << "Enter rows and colomn elements: " << endl;
for(int i=0;i<2;i++){
for(int j=0;j<4;j++){
cin >> arr[i][j];
}
}*/
cout << "Displaying rows and colomn elements: " << endl;
for(int i=0;i<2;i++){
for(int j=0;j<4;j++){
cout << arr[i][j]<<" " ;
}cout << endl;
}
int sum[2][4]={{0},{0}};
for(int i=0;i<2;i++){
for(int j=0;j<4;j++){
sum[i][j]=sum[i][j]+arr[i][j];
}
}
cout << "Sum of rows and colomn elements: " << endl;
for(int i=0;i<2;i++){
for(int j=0;j<4;j++){
cout << sum[i][j]<<" " ;
}cout << endl;
}

}