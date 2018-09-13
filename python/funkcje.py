#!/usr/bin/env python3
# -*- coding: utf-8 -*-
#
#  wejscie-wyjscie.py

def dodaj(a, b):
    return(a + b)
    
def odejmij(a, b):
    return(a - b)
    
def pomnoz(a, b):
    return(a * b)
    
def podziel(a, b):
    return(a / b)
    

def main(args):
    a = int(input("Podaj liczbe 1: "))
    print(a)
    b = int(input("Podaj liczbe 2: "))
    print(b)
    
    print("Suma: ", dodaj(a, b))
    print("Roznica: ", odejmij(a, b))
    print("Iloczyn: ", pomnoz(a, b))
    print("Iloraz: ", podziel(a, b))
    
	
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
