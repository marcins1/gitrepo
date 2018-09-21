#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla-for.py
#
# Program sumuje liczby nieparzyste w podanym zkresie

import random

def losuj_nieparzyste(maks):
    nieparzyste=[]
    for i in range(200):
        liczba = random.randint(0, MAKS_LICZBA)
        if liczba % 2:
            nieparzyste.append(liczba)
            print(len(nieparzyste))
            pass

def main(args):
    maks=200
    liczby = []
    suma=0
    licznik=0
    for liczba in range(200):
        liczby.append(random.randint(0, maks))
    
    for liczba in liczby:
        if liczba%2:
            suma+=liczba
            licznik+=1
    print(suma, licznik)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
