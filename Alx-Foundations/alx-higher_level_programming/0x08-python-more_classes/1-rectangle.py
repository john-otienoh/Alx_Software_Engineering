#!/usr/bin/python3

"""Define Class Rectangle"""


class Rectangle:
    """Class Rectangle"""
    def __init__(self, width=0, height=0):
        """
        Initialize the class

        Args:
            width(int): Rectaangle width
            height(int): Rectangle height
        """
        self.__height = height
        self.__width = width

    @property
    def height(self):
        """property to retrieve height"""
        return self.__height

    @height.setter
    def height(self, value):
        """property setter to set height"""
        if type(value) != int:
            raise TypeError('height must be an integer')
        elif value < 0:
            raise ValueError('height must be >= 0')
        self.__height = value

    @property
    def width(self):
        """property to retreive width"""
        return self.__width

    @width.setter
    def width(self, value):
        """property setter to set width"""
        if type(value) != int:
            raise TypeError('width must be an integer')
        elif value < 0:
            raise ValueError('width must be >= 0')
        self.__width = value
