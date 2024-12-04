#!/usr/bin/python3
def find_peak(list_of_integers):
    """
    function that finds a peak in a list of unsorted integers.
    Args:
        list_of_integers - list of unsorted integers.
    Return:
        None if list is empty else the peak element.
    """
    if list_of_integers:
        first_index = 0
        last_index = len(list_of_integers) - 1
        while last_index > first_index:
            m = (first_index + last_index) // 2
            check_one = list_of_integers[m] > list_of_integers[m + 1]
            check_two = list_of_integers[m] > list_of_integers[m - 1]
            check_three = list_of_integers[m] < list_of_integers[m + 1]
            if check_one and check_two:
                return m
            elif check_three:
                first_index = m + 1
            else:
                last_index = m - 1
    else:
        return None
    return first_index
