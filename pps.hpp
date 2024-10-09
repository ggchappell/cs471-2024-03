// pps.hpp
// Glenn G. Chappell
// 2024-10-04
// Header for prettyPrintSquare

#ifndef FILE_PPS_HPP_INCLUDED
#define FILE_PPS_HPP_INCLUDED

#include <iostream>
// For std::cout, std::ostream
#include <string>
// For std::string, std::to_string


inline
int square(int n)
{
    return n*n;
}


inline
std::string prettify(const std::string & ss)
{
    auto width = ss.size() + 4;
    std::string result;

    result = std::string(width, '*') + "\n";
    result += "* " + ss + " *\n";
    result += std::string(width, '*') + "\n";

    return result;
}


inline
void prettyPrintSquare(int n,
                       std::ostream & out = std::cout)
{
    auto nn = square(n);
    auto ss = std::to_string(nn);
    auto printthis = prettify(ss);
    out << printthis;
}

#endif  //#ifndef FILE_PPS_HPP_INCLUDED

