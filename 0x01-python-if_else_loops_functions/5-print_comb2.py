#!/usr/bin/python3
for i in range(0, 99):
    for j in range(0, 100):
        if i != j:
            print("{:02d}, ".format(i), end="")
        else:
            print("{:02d}".format(i))
