#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return (a + b);
}
int sum(int a, int b, int c)
{
    return (a + b + c);
}
float sum(float a, float b)
{
    return (a + b);
}
int main()

{
    cout << sum(10, 20) << endl;
    cout << sum(10, 20, 30) << endl;
    cout << sum(10.9f, 18.5f);
}