#include <iostream>
using namespace std;

class time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor 1: initializes all values to 0
    time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    // Constructor 2: initializes to fixed values
    time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Display time in hh:mm:ss format
    void display() const
    {
        cout << hours << ":" << minutes << ":" << seconds;
    }

    // Adds two time objects and stores the result in the calling object
    void add(time t1, time t2)
    {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes;
        hours   = t1.hours   + t2.hours;

        // Adjust seconds overflow
        if (seconds >= 60)
        {
            seconds -= 60;
            minutes++;
        }

        // Adjust minutes overflow
        if (minutes >= 60)
        {
            minutes -= 60;
            hours++;
        }
    }
};

int main()
{
    time t1(1, 40, 30);    // fixed values: 1:40:30
    time t2(2, 25, 50);    // fixed values: 2:25:50
    time t3;               // initialized to 0:0:0

    t3.add(t1, t2);        // add t1 + t2 and store in t3

    cout << "Time 1 = ";
    t1.display();

    cout << "\nTime 2 = ";
    t2.display();

    cout << "\nSum     = ";
    t3.display();

    cout << endl;

    return 0;
}
