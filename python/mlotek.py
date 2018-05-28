#!/usr/bin/env python
# -*- coding: utf-8 -*-

import random


def main(args):
    liczba = random.randint(1, 10)  # Losowanie liczby
    print("WYLOSOWANO LICZBĘ")

    for i in range(3):
        print("Próba", i + 1)
        odp = input("Podaj liczbę od 1 do 10: ")
        odp = int(odp)
        print("Wybrałeś liczbę: ", odp)

        if liczba == odp:   # Porównanie odpowiedzi z wylosowaną liczbą
            print("Zgadłeś!")
            break   # Przerwanie działania pętli
        elif i == 2:
            print("Wylosowana liczba: ", liczba)
        else:
            print("Nie udało Ci się zgadnąć!")

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
