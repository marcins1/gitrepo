#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  warunki.py
# Program pobiera 3 liczby całkowite
# i wyświetla liczbę największą


def maks(a, b, c):
    maxim = a
    if b>maxim:
        maxim=b
    if c>maxim:
        maxim=c
    return maxim
    

def main(args):
    a = int(input("Podaj liczbe 1: "))
    b = int(input("Podaj liczbe 2: "))
    c = int(input("Podaj liczbe 3: "))
    
    print(maks(a, b, c))
    
    #assert(maks(1, 2, 3)==3)
    #assert(maks(3, 2, 1)==3)
    #assert(maks(1, 1, 3)==3)
    #assert(maks(3, 1, 1)==3)
    #assert(maks(3, 3, 3)==3)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
