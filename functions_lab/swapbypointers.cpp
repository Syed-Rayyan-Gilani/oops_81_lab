#include <iostream>
using namespace std;

void swapPointer(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int m, n;
    cout << "Enter two numbers: ";
    cin >> m >> n;

    cout << "Before swap(): m = " << m << ", n = " << n << endl;
    swapPointer(&m, &n);
    cout << "After swap(): m = " << m << ", n = " << n << endl;
    return 0;
}
