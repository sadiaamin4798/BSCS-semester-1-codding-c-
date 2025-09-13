#include <iostream>
using namespace std;
int main() {
    int year1, month1, day1;
    int year2, month2, day2;

    cout << "Enter the birth date of the  person (Year Month Day): ";
    cin >> year1 >> month1 >> day1;

    cout << "Enter the birth date of the today's (Year Month Day): ";
    cin >> year2 >> month2 >> day2;

    // Initialize age difference variables
    int ageDiffYears = year1 - year2;
    int ageDiffMonths = month1 - month2;
    int ageDiffDays = day1 - day2;

    // Adjust if the day difference is negative
    if (ageDiffDays < 0) {
        ageDiffDays =ageDiffDays+30;  // Assume 30 days in a month for simplicity
        ageDiffMonths = ageDiffMonths- 1;
    }

    // Adjust if the month difference is negative
    if (ageDiffMonths < 0) {
        ageDiffMonths =ageDiffMonths+ 12;
        ageDiffYears =ageDiffYears- 1;
    }

    // Make sure age difference in years is positive by swapping dates if needed
   if (ageDiffYears < 0) {
        ageDiffYears = -ageDiffYears;
       // ageDiffMonths = -ageDiffMonths;
       // ageDiffDays = -ageDiffDays;
    }

    cout << "The age difference is " << ageDiffYears << " years, "
              << ageDiffMonths << " months, and " << ageDiffDays << " days." << std::endl;

    return 0;
}