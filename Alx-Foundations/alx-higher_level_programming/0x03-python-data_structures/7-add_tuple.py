#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    my_new_tuple = ()
    tuple_1 = tuple_a + (0, 0)
    tuple_2 = tuple_b + (0, 0)
    tuple_a_result = tuple_1[0] + tuple_2[0]
    tuple_b_result = tuple_1[1] + tuple_2[1]
    my_new_tuple = tuple_a_result, tuple_b_result
    return my_new_tuple
