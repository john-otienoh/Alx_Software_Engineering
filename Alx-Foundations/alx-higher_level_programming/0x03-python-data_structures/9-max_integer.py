#!/usr/bin/python3
def max_integer(my_list=[]):
    if len(my_list) == 0:
        return None
    else:
        big_int = int(my_list[0])
        for i in range(0, len(my_list)):
            if big_int < int(my_list[i]):
                big_int = int(my_list[i])
        return big_int
