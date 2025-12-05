#include <iostream>
using namespace std;

class angle
{
private:
    int degrees;
    float minutes;
    char direction;   // N, S, E, W

public:
    // 3-argument constructor
    angle(int d, float m, char dir)
    {
        degrees = d;
        minutes = m;
        direction = dir;
    }

    // Function to get angle from user
    void get_angle()
    {
        cout << "Enter degrees: ";
        cin >> degrees;

        cout << "Enter minutes: ";
        cin >> minutes;

        cout << "Enter direction (N/S/E/W): ";
        cin >> direction;
    }

    // Function to display angle
    void display() const
    {
        cout << degrees << "\xF8"     // degree symbol
             << minutes << "' " 
             << direction;
    }
};


int main()
{
    // Initialize one angle using constructor
    angle a1(149, 34.8, 'W');

    cout << "Initial angle: ";
    a1.display();
    cout << endl << endl;

    // Loop: input and display any angle the user wants
    angle a2(0, 0.0, 'N');   // temporary object

    while (true)
    {
        cout << "Enter a new angle (Ctrl+C to exit):\n";
        a2.get_angle();

        cout << "You entered: ";
        a2.display();
        cout << endl << endl;
    }

    return 0;
}
