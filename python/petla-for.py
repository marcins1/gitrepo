#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla-for.py


def main(args):
    
    zakres = int(input("Podaj zakres dolny "))
    zakres2 = int(input("Podaj zakres gorny "))
    
    if zakres >= zakres2:
        while zakres >= zakres2:
            print("Wprowadź poprawne dane")
            zakres = int(input("Podaj zakres dolny "))
            zakres2 = int(input("Podaj zakres gorny "))
        
    for liczba in range(zakres, zakres2+1):
        if liczba % 2 == 0: 
            print(liczba)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
