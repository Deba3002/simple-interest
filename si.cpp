#include <iostream>

using namespace std;

int main() {
    double principal, rate, time, simpleInterest;

    // Taking user input
    cout << "Enter Principal Amount: ";
    cin >> principal;
    cout << "Enter Rate of Interest (% per annum): ";
    cin >> rate;
    cout << "Enter Time (in years): ";
    cin >> time;

    // Calculating simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Displaying the result
    cout << "Simple Interest = " << simpleInterest << endl;

    return 0;
}
