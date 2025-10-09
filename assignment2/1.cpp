#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float real1, imag1, real2, imag2;
    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> real1 >> imag1;
    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> real2 >> imag2;

    float mag1 = sqrt(real1 * real1 + imag1 * imag1);
    float mag2 = sqrt(real2 * real2 + imag2 * imag2);

    if (mag1 > mag2)
        cout << "First complex number has higher magnitude.";
    else if (mag2 > mag1)
        cout << "Second complex number has higher magnitude.";
    else
        cout << "Equal";
    
    return 0;
}