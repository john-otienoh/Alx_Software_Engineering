#!/usr/bin/python3
def safe_print_list_integers(my_list=[], x=0):
    try:
        count = 0
        try:
            for i in range(x):
                print("{:d}".format(my_list[i]), end="")
                count += 1
        except (ValueError, IndexError):
            pass
        print()
        return count
    except TypeError:
        return 0
