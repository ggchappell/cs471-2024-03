# cube_lib.py
# Glenn G. Chappell
# 2024-10-01
#
# For CS 471 Fall 2024
# Importable module with doctests
# Executing as stand-alone program runs doctests


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


# Main program: run doctests
if __name__ == "__main__":
    import doctest
    doctest.testmod()

