#!/usr/bin/env python
# -*- coding: utf-8 -*-

import random


def main(args):
    ileliczb = int(input("Ile liczb wytypujesz? "))
    maksliczba = int(input("Podaj maksymalną losowaną liczbę: "))
    print("Wytypuj {} z {} liczb: ".format(ileliczb, maksliczba))

    liczby = []  # Definicja pustej liczby na losowane liczby
    i = 0  # Licznik unikalnych wylosowanych liczb
    # for i in range(ileliczb):
    while i < ileliczb:
        liczba = random.randint(1, maksliczba)
        if liczby.count(liczba) == 0:
            liczby.append(liczba)
            i += 1  # Zwiększanie licznika o 1
    print("Wylosowano: ", liczby)

    typy = set()  # Definicja pustego zbioru na typy użytkownika
    i = 0  # Licznik unikalnych typów użytkownika
    while i < ileliczb:
        typ = input("Podaj liczbę {}: ".format(i + 1))
        if typ not in typy:
            typy.add(typ)
            i += 1
    print("Wytypowane: ", typy)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
