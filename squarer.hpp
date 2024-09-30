// squarer.hpp
// Glenn G. Chappell
// 2024-09-27
//
// For CS 471 Fall 2024
// Header for class Squarer
// There is no associated source file.

#ifndef FILE_SQUARER_HPP_INCLUDED
#define FILE_SQUARER_HPP_INCLUDED


// Class Squarer
// Object that squares things. Use operator().
class Squarer {
public:

    // operator()
    // Returns the square of its argument.
    template<typename Num>
    Num operator()(const Num & n) const
    {
        return n*n;
    }

};  // End class Squarer


#endif  //#ifndef FILE_SQUARER_HPP_INCLUDED

