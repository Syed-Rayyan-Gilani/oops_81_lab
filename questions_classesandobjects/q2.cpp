#include <iostream>
#include <conio.h> // for getch()
using namespace std;

class tollBooth
{
private:
    unsigned int totalCars; // counts number of cars
    double totalCash;       // total money collected

public:
    // Constructor
    tollBooth()
    {
        totalCars = 0;
        totalCash = 0.0;
    }

    // Member function for paying car
    void payingCar()
    {
        totalCars++;
        totalCash += 0.50;
    }

    // Member function for non-paying car
    void nopayCar()
    {
        totalCars++;
    }

    // Display totals (const because it doesn't modify any data)
    void display() const
    {
        cout << "\n--- Toll Booth Report ---\n";
        cout << "Total cars: " << totalCars << endl;
        cout << "Total cash: $" << totalCash << endl;
    }
};

int main()
{
    tollBooth booth;
    char ch;

    cout << "Press 'p' for Paying Car\n";
    cout << "Press 'n' for Non-Paying Car\n";
    cout << "Press 'Esc' to Exit and Display Totals\n";

    while (true)
    {
        ch = getch(); // reads key without pressing Enter

        if (ch == 27) // ASCII code for ESC key
        {
            booth.display();
            break;
        }
        else if (ch == 'p' || ch == 'P')
        {
            booth.payingCar();
            cout << "Paying car recorded.\n";
        }
        else if (ch == 'n' || ch == 'N')
        {
            booth.nopayCar();
            cout << "Non-paying car recorded.\n";
        }
        else
        {
            cout << "Invalid key. Press p/n/ESC.\n";
        }
    }

    return 0;
}
