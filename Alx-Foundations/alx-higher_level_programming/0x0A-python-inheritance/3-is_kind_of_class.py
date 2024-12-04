#!/usr/bin/python3
"""Defines an instance of a class-checking function."""


def is_kind_of_class(obj, a_class):
    """Checks if an object is an instance of a class, or if the object is an
    instance of a class that inherited from.
    Args:
        a_class (type): The class to match the type of obj to.
    Returns:
        If obj is an instance of a_class - True.
        Otherwise - False.
    """
    return True if isinstance(obj, a_class) else False
