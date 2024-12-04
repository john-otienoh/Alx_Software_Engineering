#!/usr/bin/python3
"""Define a square print character (#) function"""


def print_square(size):
    """Print  a square with the character #.
    Args:
        size - size length of the square.
    Raises:
        TypeError: if size is not an integer.
                   if size is a float and is less than 0.
        ValueError: if size is less than 0.
    """
    if type(size) != int:
        raise TypeError("size must be an integer")
    if size < 0:
        raise ValueError("size must be >= 0")
    if size < 0 and type(size) == float:
        raise TypeError("size must be an integer")
    for _ in range(size):
        for _ in range(size):
            print("#", end='')
