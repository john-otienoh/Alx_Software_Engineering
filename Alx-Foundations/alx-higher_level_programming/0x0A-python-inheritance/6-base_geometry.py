#!/usr/bin/python3
"""Defines BaseGeometry class"""


class BaseGeometry:
    """Represents BaseGeometry"""

    def area(self):
        """Public instance method that raises an exception"""
        raise Exception('area() is not implemented')
