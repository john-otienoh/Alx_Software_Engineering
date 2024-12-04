#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    val_list = list(a_dictionary.keys())
    for i in val_list:
        if a_dictionary.get(i) == value:
            del a_dictionary[i]
    return a_dictionary
