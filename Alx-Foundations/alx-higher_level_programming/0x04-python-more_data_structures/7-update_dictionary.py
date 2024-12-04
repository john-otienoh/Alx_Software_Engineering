#!/usr/bin/python3
def update_dictionary(a_dictionary, key, value):
    list_keys = list(a_dictionary.key())
    for i in list_keys:
        if i == key:
            a_dictionary[i] = value
        else:
            a_dictionary[key] = value

    return a_dictionary
