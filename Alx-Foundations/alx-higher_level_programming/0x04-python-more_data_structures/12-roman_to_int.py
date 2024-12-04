#!/usr/bin/python3
def roman_to_int(roman_string):
    roman = {'I': 1, 'IV': 4}
    if type(roman_string) != str:
        return None
