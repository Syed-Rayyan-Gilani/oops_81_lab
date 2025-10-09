#include <iostream>
using namespace std;

bool isLeap(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return true;
            else
                return false;
        } else
            return true;
    } else
        return false;
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (isLeap(year)) {
        cout << year << " is a leap year.";
    } else {
        cout << year << " is not a leap year.\nNext 5 leap years: ";
        int count = 0;
        int nextYear = year + 1;
        while (count < 5) {
            if (isLeap(nextYear)) {
                cout << nextYear << " ";
                count++;
            }
            nextYear++;
        }
    }

    return 0;
}