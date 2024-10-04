#!/usr/bin/env python3
# cube_prog.py
# Glenn G. Chappell
# 2024-10-01
#
# For CS 471 Fall 2024
# Stand-alone program with doctests


def cube(x):
    """Return cube of x.

    >>> cube(5)
    125
    >>> cube(-1)
    -1
    >>> cube(0)
    0
    """
    return x*x*x


# Main program
if __name__ == "__main__":
    val = 5
    print("The cube of", val, "is", cube(val))

