#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    new_dict = {}
    for i, j in zip(sorted(a_dictionary), a_dictionary):
        new_dict[i] = a_dictionary.get(i)
        print("{}: {}".format(i, a_dictionary.get(i)))
    return new_dict
