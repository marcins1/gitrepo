#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla-cw5.py
#
# DANE WEJŚCIOWE:
# Liczby dodatnie podawane przez użytkownika
# DANE WYJŚCIOWE:
# Suma liczb podanych przez użytkownika
# Program musi zapewnić poprawność danych
# Program kończy działanie po wprowadzeniu wartości 0

            


def main(args):      
    liczba = -1
    suma=0
    while liczba!=0:
        liczba = int(input("Wprowadź liczbę: "))
        if liczba < 0:
            print("Błędna liczba")
        else: 
            suma += liczba
            
    print("Suma liczb: ", suma)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
