#!/usr/bin/python3
if __name__ == '__main__':
    from sys import argv
    add = 0
    argv_len = len(argv)
    if argv_len - 1 == 0:
        print(int('0'))
    elif argv_len - 1 == 1:
        print(int(argv[1]))
    else:
        for i in range(1, argv_len):
            add += int(argv[i])
        print("{:d}".format(add))
