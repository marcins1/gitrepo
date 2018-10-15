#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  euklides.py

def euklides(a, b):
    while a!=b:
        if a > b:
            a-=b
        else:
            b-=a
        # ~print(a,b)
    return a
    
def nww(a, b):
    """Oblicza i zwraca najmniejsza wspolna wielokrotnosc"""
    return a*b/euklides(a, b)

def main(args):
    a = int(input("Liczba a: "))
    b = int(input("liczba b: "))
    print("NWD1({}, {}) = {}".format(
    a, b, euklides(a,b)))
    print(nww(a,b))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
