#!/usr/bin/python3

"""Define a class square"""


class Square:
    """Represents a square"""

    def __init__(self, size=0):
        """Initialize the square class
        Args:
            size(int): size of the Square
        """
        self.size = size

    @property
    def size(self):
        """Get/set size of the square"""
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
        return self.__size ** 2

    def my_print(self):
        """prints the square in stdout"""
        for i in range(0, self.__size):
            for j in range(0, self.__size):
                if self.__size == 0:
                    print("\n")
                else:
                    print("#", end="")
            print("")
