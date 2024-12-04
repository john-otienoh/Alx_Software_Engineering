#!/usr/bin/python3
"""Defines a text write function"""


def write_file(filename="", text=""):
    """Return: Number of characters written."""
    with open(filename, 'w') as my_file:
        my_file.write(text)
    return len(text)
