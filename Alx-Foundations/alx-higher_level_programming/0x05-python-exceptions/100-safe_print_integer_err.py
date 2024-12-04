#!/usr/bin/python3
def safe_print_integer_err(value):
    try:
        if int(value):
            print("{:d}".format(value))
    except (ValueError, TypeError) as err:
        print("Exception: {}".format(err))
        return False
    else:
        return True
