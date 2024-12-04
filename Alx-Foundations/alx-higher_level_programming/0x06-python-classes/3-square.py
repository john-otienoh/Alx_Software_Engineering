#!/usr/bin/python3
"""Define class Square"""


class Square:
    """
    class representing a Square.
    Attributes:
        __size (int): The size of the square.
    Method:
        __init__ : Initializes a new Square instance of optional size.
        area(self): Returns the current square area.
    """
    def __init__(self, size=0):
        """Initialize a new square.
        Args:
            size(int): size of the square class
        Raises:
            TypeError:  If size is not of type int.
            ValueError: If size is less than 0.
        """
        if type(size) is not int:
            raise TypeError("size must be an integer")
        elif size < 0:
            raise ValueError("size must be >= 0")
        self.__size = size

    def area(self):
        """
        Return the current area of the square
        Returns:
            int: The area of the square.
        """
        return self.__size ** 2
