#!/usr/bin/python3
"""Defines a list subclass MyList"""


class MyList(list):
    """Represents a List"""

    def print_sorted(self):
        """prints the list, but sorted (ascending sort)"""
        print(sorted(self))
