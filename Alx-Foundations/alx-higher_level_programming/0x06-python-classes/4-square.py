#!/usr/bin/python3

"""Define a class Square"""


class Square:
    """Represents a square"""

    def __init__(self, size=0):
        """Initialize the square class

        Args:
            size(int): size of Square
        """
        self.size = size

    @property
    def size(self):
        """Get/Set size of the Square"""
        return (self.__size)

    @size.setter
    def size(self, value):
        if type(value) is not int:
            raise TypeError("size must be an integer")
        elif value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    def area(self):
        """Returns the current square area"""
        return (self.__size ** 2)
