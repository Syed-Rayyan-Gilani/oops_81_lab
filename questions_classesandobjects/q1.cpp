#include <iostream>
using namespace std;

class Int        // Class name
{
private:
    int value;   // Data member (stores an integer)

public:
    // Default constructor (initializes value to 0)
    Int()        
    {
        value = 0;
    }

    // Parameterized constructor (initializes value to given int)
    Int(int v)   
    {
        value = v;
    }

    // Member function to display the value
    void display()   
    {
        cout << value;
    }

    // Member function to add two Int objects
    Int add(Int obj) 
    {
        Int temp;                 // temporary Int object
        temp.value = value + obj.value;  // adding values
        return temp;              // returning resulting Int object
    }
};

int main()
{
    Int result;           // uninitialized Int (but default constructor sets to 0)
    Int a(10);            // initialized Int with value 10
    Int b(20);            // initialized Int with value 20

    result = a.add(b);    // adding two Int objects

    cout << "Result = ";
    result.display();     // displaying result

    return 0;
}
