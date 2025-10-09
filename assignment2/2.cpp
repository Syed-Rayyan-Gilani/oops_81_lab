#include <iostream>
using namespace std;

int main() {
    int marks[5], failCount = 0;
    float total = 0;

    cout << "Enter marks for 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
        if (marks[i] < 40)
            failCount++;
    }

    float percentage = total / 5;

    if (failCount > 1) {
        cout << "Repeat Year";
    } else {
        if (percentage >= 90)
            cout << "Grade: A";
        else if (percentage >= 75)
            cout << "Grade: B";
        else if (percentage >= 60)
            cout << "Grade: C";
        else if (percentage >= 40)
            cout << "Grade: D";
        else
            cout << "Grade: F";
    }

    return 0;
}