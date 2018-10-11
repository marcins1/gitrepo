#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  liczby23.py

def liczby2():
    """
    Funkcja drukuje wszystkie liczby 2-cyfrowe,
    w których cyfry nie powtarzają się. Funckja
    zwraca ich liczbę. Wykluczone liczby: 11, 22, 33 itd.
    """
    licznik = 0
    for i in range(1, 10):
        for j in range(0, 10):
            if i!=j:
                print(" {}{} ".format(i, j), end="")
                licznik += 1
    return licznik 
      
def liczby2v2():
    licznik = 0
    for i in range(10, 99):
        liczba = i % 10
        if liczba != int(i / 10):
            print(i, " ", end="")
            licznik += 1
    return licznik

def liczby3():
    licznik = 0
    for i in range(1,10):
        for j in range(10):
            for k in range(10):
                if i!=j and i!=k and k!=j:
                    print(" {}{}{} ".format(i, j, k), end="")
                    licznik += 1
    return licznik
    
def main(args):
    print("Liczb 2-cyfrowych:", liczby2())
    print()
    print("Liczb 2-cyfrowych:", liczby2v2())
    print()
    print("Liczb 3-cyfrowych:", liczby3())
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
