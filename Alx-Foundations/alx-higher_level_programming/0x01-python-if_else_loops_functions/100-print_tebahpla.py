#!/usr/bin/python3
for i, j in zip(range(89, 63, -2), range(122, 96, -2)):
    print("{}{}".format(chr(j), chr(i)), end='')
