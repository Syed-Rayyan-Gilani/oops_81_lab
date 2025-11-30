#include <iostream>
using namespace std;

void repchar()
{
    for (int j = 0; j < 45; j++)
        cout << '*';
    cout << endl;
}

void repchar(char ch)
{
    for (int j = 0; j < 45; j++)
        cout << ch;
    cout << endl;
}

void repchar(char ch, int n)
{
    for (int j = 0; j < n; j++)
        cout << ch;
    cout << endl;
}

int main()
{
    repchar();
    repchar('=');
    repchar('+', 30);

    return 0;
}
