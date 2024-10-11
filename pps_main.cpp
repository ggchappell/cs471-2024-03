// pps_main.cpp
// Glenn G. Chappell
// Started: 2024-10-04
// Updated: 2024-10-09
// Simple main program for prettyPrintString
// Requires pps.hpp

#include "pps.hpp"
// For prettyPrintSquare
#include <iostream>
using std::cout;
#include <string>
using std::string;


// class Cube
// A compute class (derived from Compute): member func doint cubes an
// int.
class Cube : public Compute {
public:

    virtual ~Cube() {}

    virtual int doint(int n) const
    {
        return n*n*n;
    }
};


// class Pounds
// A format class (derived from Format): member func dostr puts three
// pound signs ("###") before and after a string, with a newline at the
// end.
class Pounds : public Format {
public:

    virtual ~Pounds() {}

    virtual string dostr(const string & s) const
    {
        return "### " + s + " ###\n";
    }
};


// Main program
int main()
{
    int n = 5;  // Value to pass to prettyPrintSquare

    // Call prettyPrintSquare with default behavior
    cout << "Calling prettyPrintSquare on " << n << "\n";
    prettyPrintSquare(n);

    cout << "\n";

    // Call prettyPrintSquare, specifying options via dependency
    // injection
    cout << "Calling prettyPrintSquare on " << n << " with options\n";
    prettyPrintSquare(n, cout, Cube(), Pounds());
}

