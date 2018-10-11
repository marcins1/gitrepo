#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  potega.py
# Oblicznie potęgi liczby naturalnej

def potega_it(a, n):
    wynik = 1
    for i in range(n):
        wynik *= a
    return wynik

def main(args):
    # ~liczba = int(input("Podaj liczbę: "))
    # ~wykladnik = int(input("Podaj wykładnik: "))
    # ~print(potega(liczba, wykladnik))
    a, n = 0, 0
    print("Podstawa {} do potęgi {} wynosi {}.".
           format(a, n, potega_it(a, n)))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
