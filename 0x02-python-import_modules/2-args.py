#!/usr/bin/python3
from sys import argv

if len(argv) == 1:
    print("0 arguments.")
else:
    print("{} arguments:".format(len(argv) - 1))
    for i in range(1, len(argv)):
        print("{}: {}".format(i, argv[i]))
