#include <iostream>
using namespace std;

class date
{
private:
    int month;
    int day;
    int year;

public:
    // Function to take date input in mm/dd/yy format
    void getdate()
    {
        char slash;   // to read '/'
        cout << "Enter date (mm/dd/yy): ";
        cin >> month >> slash >> day >> slash >> year;
    }

    // Function to display date
    void showdate() const
    {
        cout << month << "/" << day << "/" << year;
    }
};

int main()
{
    date d;        // create object of class date

    d.getdate();   // user enters date
    cout << "You entered: ";
    d.showdate();  // display date

    cout << endl;
    return 0;
}
