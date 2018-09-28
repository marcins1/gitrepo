#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla-cw2.py
# DANE WEJŚCIOWE:
# zmienne start i stop podane przez użytkownika
# DANE WYJŚCIOWE:
# liczby naturalne od start do stop


def main(args):
    liczba1 = int(input("Podaj zakres dolny "))
    liczba2 = int(input("Podaj zakres górny "))
    for i in range (liczba1, liczba2 + 1):
        print(i," ", end='')
        
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
