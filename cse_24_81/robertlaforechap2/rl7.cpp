#include <iostream>
using namespace std;

int main()
{

    float celsius;

    cout << "Enter temperature in degrees Celsius: ";
    cin >> celsius;

    float fahrenheit = (celsius * 9.0 / 5.0) + 32;

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}