#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  warunki.py


def main(args):
    a = int(input("Podaj liczbe 1: "))
    b = int(input("Podaj liczbe 2: "))
    
    if a > b:
        print(a, "jest większe od", b)
    elif a < b:
        print(b, "jest większe od", a)
    else:
        print(a, "równa się", b)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
