
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    int secondMax = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    if (secondMax == INT_MIN) {
        cout << "There is no second maximum element in the array." << endl;
    } else {
        cout << "The second maximum element in the array is: " << secondMax << endl;
    }

    return 0;
}
