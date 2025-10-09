#include <iostream>
using namespace std;
int main()
{
    double dollar;
    cout << "enter amount in dollar";
    cin >> dollar;
    double pound = dollar / 1.487;
    double franck = dollar / 0.172;
    double german = dollar / 0.584;
    double yen = dollar / 0.00955;
    cout << "the values in different currencies are" << endl;
    cout << "bp" << pound << endl;
    cout << "francs" << franck << endl;
    cout << "gereman" << german << endl;
    cout << "yen" << yen << endl;
}