#!/usr/bin/python3
"""Define a text file-appending function"""


def append_write(filename="", text=""):
    """Return the number of characters added"""
    with open(filename, 'a') as my_file:
        my_file.write(text)
    return len(text)
