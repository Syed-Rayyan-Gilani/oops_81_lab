#include <iostream>
using namespace std;

int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int min(int a, int b, int c)
{
    if (a < b && a < c)
        return a;
    else if (b < a && b < c)
        return b;
    else
        return c;
}
float min(float a, float b)
{
    if (a < b)
        return a;
    else
        return b;
}
int main()
{
    cout << min(10, 67) << endl;
    cout << min(10.f, 18.f)<< endl;
    cout << min(25, 20, 30);
}