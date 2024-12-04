#!/usr/bin/python3
def weight_average(my_list=[]):
    score = 0
    weight = 0
    if not my_list:
        return None
    for i in range(len(my_list)):
        score += my_list[i][0] * my_list[i][1]
        weight += my_list[i][1]
    return score / weight
