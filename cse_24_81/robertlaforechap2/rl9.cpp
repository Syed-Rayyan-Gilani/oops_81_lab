#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    char dummychar;

    cout << "Enter first fraction: ";
    cin >> a >> dummychar >> b;

    cout << "Enter second fraction: ";
    cin >> c >> dummychar >> d;

    int numerator = a * d + b * c;
    int denominator = b * d;

    cout << "Sum = " << numerator << "/" << denominator << endl;

    return 0;
}
