#include <iostream>
#include <iomanip>  // For setprecision
using namespace std;

int main() {
    int pounds, shillings, pence;
    float total;

    cout << "Enter your amount in pounds, shillings, pence: ";
    cin >> pounds >> shillings >> pence;

    cout << "You entered: " << pounds << " pounds, " << shillings << " shillings, " << pence << " pence" << endl;

    // Convert shillings and pence to pounds
    total = pounds + shillings / 20.0 + pence / 240.0;

    // Show total in decimal pounds with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Decimal amount in pounds: " << total << endl;

    return 0;
}