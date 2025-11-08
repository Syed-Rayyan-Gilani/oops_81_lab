#include <iostream>
using namespace std;

void swapReference(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swap(): a = " << a << ", b = " << b << endl;
    swapReference(a, b);
    cout << "After swap(): a = " << a << ", b = " << b << endl; 
    return 0;
}
