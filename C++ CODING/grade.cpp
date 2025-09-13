#include <iostream>
using namespace std;

int main() {
    int marks;
    
    // Input marks from the user
    cout << "Enter marks: ";
    cin >> marks;

    // Using switch statement to grade the marks
    switch (marks / 10) {
        case 10:
        case 9:
            cout << "Grade: A+" << endl;
            break;
        case 8:
            cout << "Grade: A" << endl;
            break;
        case 7:
            cout << "Grade: B" << endl;
            break;
        case 6:
            cout << "Grade: C" << endl;
            break;
        case 5:
            cout << "Grade: D" << endl;
            break;
        default:
            if (marks >= 0) {
                cout << "Grade: F" << endl;
            } else {
                cout << "Invalid marks!" << endl; // Handle negative marks
            }
            break;
    }

    return 0;
}