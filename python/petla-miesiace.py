#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla-miesiace.py
#
#	Napisz program, który wczytuje z klawiatury
#	poprawny numer miesiąca. Możliwe są maksymalnie trzy próby.
#	Wydrukuj podany numer oraz nazwę miesiąca.


def main(args):
    licznik = 0
    nazwy=['Styczeń', 'Luty', 'Marzec', 'Kwiecień', 'Maj', 'Czerwiec', 'Lipiec', 'Sierpień', 'Wrzesień', 'Październik', 'Listopad', 'Grudzień']
    while licznik < 3:
        print("Masz jeszcze",3-licznik,"próby/ę.")
        miesiac = int(input("Wprowadź numer miesiaca: "))
        licznik += 1
        if miesiac > 12 or miesiac < 1:
            print("Błędny numer")
        else:
            print(miesiac, nazwy[miesiac-1])
            break
			
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
