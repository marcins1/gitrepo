#!/usr/bin/env python3
# -*- coding: utf-8 -*-
#
#  wejscie-wyjscie.py

def dodaj():
    print(a+b)

def main(args):
    a = int(input("Podaj liczbe 1: "))
    print(a)
    b = int(input("Podaj liczbe 2: "))
    print(b)
    
    dodaj(a,b)
    print("Suma: ", a+b)
    print("Roznica: ", a-b)
    print("Iloczyn: ", a*b)
    print("Iloraz: ", a/b)
    
	
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
