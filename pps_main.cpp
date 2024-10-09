// pps_main.cpp
// Glenn G. Chappell
// 2024-10-04
// Simple main program for prettyPrintString
// Requires pps.hpp

#include "pps.hpp"
// For prettyPrintSquare
#include <iostream>
using std::cout;


int main()
{
    int n = 5;
    cout << "Calling prettyPrintSquare on " << n << "\n";
    prettyPrintSquare(n);
}

