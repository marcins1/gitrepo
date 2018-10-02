#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla-sumacyfr.py
#
#   Napisz program, który sumuje cyfry liczby podanej przez użytkownika.
#   Wydrukuj tę sumę.

            
def main(args): 
    liczba = input("Wprowadź liczbę: ")
    suma = 0
    for i in range(len(liczba)):
        suma += int(liczba[i])
    print(suma)

    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
