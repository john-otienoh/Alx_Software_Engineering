#!/usr/bin/python3

"""Define a class square"""


class Square:
    """Represents a square"""

    def __init__(self, size=0, position=(0, 0)):
        """Initialize the square class
        Args:
            size(int): size of the Square
        """
        self.size = size
        self.position = position

    @property
    def size(self):
        """Get/set size of the square"""
        return (self.__size)

    @size.setter
    def size(self, value):
        if type(value) != int:
            raise TypeError("size must be an integer")
        elif value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    @property
    def position(self):
        """Get/Set position of the square"""
        return (self.__position)

    @position.setter
    def position(self, value):
        if len(value) != 2:
            raise TypeError("position must be a tuple of 2 positive integers")
        self.__position = value

    def area(self):
        """Returns the current square area"""
        return self.__size ** 2

    def my_print(self):
        """prints the square in stdout"""
        for i in range(0, self.__size):
            print(self.__position[0] * '_', end='')
            for j in range(0, self.__size):
                if self.__size == 0:
                    print('\n')
                else:
                    print("#", end="")
            print("")
