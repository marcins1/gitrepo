#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla-cw2.py
#
# DANE WEJŚCIOWE:
# Liczby dodatnie podawane przez użytkownika
# DANE WYJŚCIOWE:
# Suma liczb podanych przez użytkownika
# Program musi zapewnić poprawność danych
# Program kończy działanie po wprowadzeniu wartości 0

            


def main(args):
    """
    Napisz program, który wczytuje z klawiatury
    poprawny numer miesiąca. Możliwe są maksymalnie trzy próby.
    Wydrukuj podany numer oraz nazwę miesiąca.
    """
    licznik=0
    nazwy=['Styczeń', 'Luty']
    while licznik<=3:
        miesiac = int(input("Wprowadź numer miesiaca: "))
        licznik += 1
        if miesiac <= 13 & miesiac > 0:
            print(miesiac)
            licznik=4
            
    """
    Napisz program, który sumuje cyfry liczby podanej przez użytkownika.
    Wydrukuj tę sumę.
    """
            
    # ~liczba = -1
    # ~suma=0
    # ~while liczba!=0:
        # ~liczba = int(input("Wprowadź liczbę: "))
        # ~if liczba < 0:
            # ~print("Błędna liczba")
        # ~else: 
            # ~suma += liczba
            
    # ~print("Suma liczb: ", suma)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
