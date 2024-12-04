#!/usr/bin/python3
"""Define text indentation function"""


def text_indentation(text):
    new_text = ''
    """Prints text with 2 new lines after each of these characters: ., ? and :
    Raises:
        TypeError: if text is not a string
    """
    for i in text:
        if i is '.' or i is ':' or i is '?':
            print("{}".format(i), '\n', '\n')
