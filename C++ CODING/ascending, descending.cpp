#include <iostream>
using namespace std;

int main() {
    int n;

    // Input: Size of array
    cout << "Enter the size of array: "<<endl;
    cin >> n;

    int arr[n];

    // Input: Elements of array
    cout << "Enter the elements of the array: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Bubble Sort algorithm
    for (int i = 0; i < n - 1; i++) {
        for (int j = i+1; j < n ; j++) {
            if (arr[i] > arr[j]) {
                // Swap the elements
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Output: Sorted array
    cout << "Array in ascending order: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
cout << endl;
for (int i = 0; i <n - 1; i++) {
        for (int j = i+1; j < n ; j++) {
            if (arr[i] < arr[j]) {
                // Swap the elements
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Output: Sorted array
    cout << "Array in descending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}