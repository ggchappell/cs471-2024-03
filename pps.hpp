// pps.hpp
// Glenn G. Chappell
// Started: 2024-10-04
// Updated: 2024-10-09
// Header for prettyPrintSquare
// There is no associated source file.

#ifndef FILE_PPS_HPP_INCLUDED
#define FILE_PPS_HPP_INCLUDED

#include <iostream>
// For std::cout, std::ostream
#include <string>
// For std::string, std::to_string


// class Compute
// Abstract base class for compute operations: member func doint takes
// int, does computation, returns resulting int.
class Compute {
public:

    virtual ~Compute() {}

    virtual int doint(int n) const = 0;
};


// class Square
// A compute class (derived from Compute): member func doint squares an
// int.
class Square : public Compute {
public:

    virtual ~Square() {}

    virtual int doint(int n) const
    {
        return n*n;
    }
};


// class Format
// Abstract base class for format operations: member func dostr takes
// string, does formatting, returns resulting string.
class Format {
public:

    virtual ~Format() {}

    virtual std::string dostr(const std::string & s) const = 0;
};


// class Box
// A format class (derived from Format): member func dostr puts a box of
// asterisks around // a string, with a newline at the end of each line.
class Box : public Format {
public:

    virtual ~Box() {}

    virtual std::string dostr(const std::string & s) const
    {
        auto width = s.size() + 4;
        std::string result;

        result = std::string(width, '*') + "\n";
        result += "* " + s + " *\n";
        result += std::string(width, '*') + "\n";

        return result;
    }
};


// prettyPrintSquare
// Takes an int, does a compute operation, then a format operation on
// the string form of the result, then prints to the given stream.
// Default behavior is to square, surround with a box of asterisks, and
// print to std output.
//
// So, given 5, default behavior is to print the following to standard
// output, with a newline at the end of each line:
// ******
// * 25 *
// ******
inline
void prettyPrintSquare(int n,
                       std::ostream & out = std::cout,
                       const Compute & c = Square(),
                       const Format & f = Box())
{
    auto nn = c.doint(n);
    auto ss = std::to_string(nn);
    auto printthis = f.dostr(ss);
    out << printthis;
}

#endif  //#ifndef FILE_PPS_HPP_INCLUDED

