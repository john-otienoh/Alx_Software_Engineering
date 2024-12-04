#!/usr/bin/python3
"""Defines an integer addition funtion."""


def add_integer(a, b=98):
    """Return the integer addition of a and b.

    Float arguments are typecasted to int first then added.

    Raises:
        TypeError: If either of a or b is a non-integer and non-float.
    """
    if type(a) != int and type(a) != float:
        raise TypeError("a must be an integer")
    if type(b) != float and type(b) != int:
        raise TypeError("b must be an integer")
    return int(a) + int(b)
