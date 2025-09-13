#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Taking element of array:" << endl;
    for(int i=0;i<=5;i++){
    cin >> arr[i];
    }
    cout << "Displaying element of array:" << endl;
    for(int i=0;i<=5;i++){
    cout << arr[i];
    }
    cout <<endl<< "array in reverse :" << endl;
    for(int i=5;i>=0;i--){
    cout << arr[i] ;
    }
}