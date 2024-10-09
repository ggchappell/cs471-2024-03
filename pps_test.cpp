// pps_test.cpp
// Glenn G. Chappell
// 2024-10-04
//
// For CS 471 Fall 2024
// Test suite for prettyPrintSquare
// Uses doctest unit-testing framework
// Requires doctest.h, pps.hpp

// Includes for code to be tested
#include "pps.hpp"
#include "pps.hpp"       // Double-inclusion check, for testing only

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
                             // doctest writes main for us
#include "doctest.h"         // For doctest framework

#include <string>
using std::string;
#include <sstream>
using std::ostringstream;


TEST_CASE( "prettyPrintSquare works" )
{
    {
    ostringstream ostr;
    int val = 5;
    string expected = "******\n* 25 *\n******\n";
    prettyPrintSquare(val, ostr);
    REQUIRE(ostr.str() == expected);
    }

    {
    ostringstream ostr;
    int val = 1234;
    string expected = "***********\n* 1522756 *\n***********\n";
    prettyPrintSquare(val, ostr);
    REQUIRE(ostr.str() == expected);
    }
}

