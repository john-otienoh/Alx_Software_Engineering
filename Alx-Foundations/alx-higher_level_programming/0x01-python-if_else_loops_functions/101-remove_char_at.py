#!/usr/bin/python3
def remove_char_at(str, n):
    my_str = ''
    if n < 0 or n > len(str):
        return str
    for i in range(len(str)):
        if i != n:
            my_str += str[i]
    return my_str
