#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    try:
        count = 0
        new_list = []
        for i, j in zip(my_list_1, my_list_2):
            result = my_list_1[count] / my_list_2[count]
            new_list.append(result)
            count += 1
    except ValueError:
        result = print("wrong type")
    except IndexError:
        result = print("out of range")
    except ZeroDivisionError:
        result = print("division by 0")
    finally:
        print("{}".format(result))
        return result
