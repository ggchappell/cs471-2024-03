// squarer_test.cpp
// Glenn G. Chappell
// Started: 2024-09-27
// Updated: 2024-10-02
//
// For CS 471 Fall 2024
// Test suite for class Squarer
// Uses doctest unit-testing framework
// Requires doctest.h, squarer.hpp

// Includes for code to be tested
#include "squarer.hpp"       // For class Squarer
#include "squarer.hpp"       // Double-inclusion check, for testing only

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
                             // doctest writes main for us
#include "doctest.h"         // For doctest framework


TEST_CASE( "Squarer gives correct results for int" )
{
    Squarer sq;  // Object that squares things

    int param = 5;
    int expected = 25;
    CHECK(sq(param) == expected);

    {
    param = -3;
    expected = 9;
    INFO("Test calling sq on a negative value");
    CHECK(sq(param) == expected);
    }

    param = 0;
    expected = 0;
    CHECK(sq(param) == expected);
}


TEST_CASE( "Squarer gives correct results for double" )
{
    Squarer sq;  // Object that squares things

    double param = 7.0;
    double expected = 49.0;
    CHECK(sq(param) == doctest::Approx(expected));

    param = 1.1;
    expected = 1.21;
    CHECK(sq(param) == doctest::Approx(expected));

    param = -1.2;
    expected = 1.44;
    CHECK(sq(param) == doctest::Approx(expected));

    param = 0.0;
    expected = 0.0;
    CHECK(sq(param) == doctest::Approx(expected));
}

