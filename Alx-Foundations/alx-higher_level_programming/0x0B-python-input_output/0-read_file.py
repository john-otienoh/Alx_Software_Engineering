#!/usr/bin/python3
"""Define a text file-reading function"""


def read_file(filename=""):
    """read a text file (UTF8) and print it to stdout"""
    with open(filename) as my_file:
        for line in my_file:
            print(line, end='')
