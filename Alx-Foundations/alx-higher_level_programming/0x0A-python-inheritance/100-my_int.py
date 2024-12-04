#!/usr/bin/python3
"""Defines int subclass MyInt"""


class MyInt(int):
    """Represents an int class"""

    def __eq__(self, i):
        """method used to override the equality operator"""
        return super().__ne__(i)

    def __ne__(self, i):
        """method used to override the inequality operator"""
        return super().__eq__(i)
