#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sqlite3
import csv


def dane_z_pliku(nazwa_pliku):
    dane = []       # Pusta lista na dane
    with open(nazwa_pliku, newline='', encoding='utf-8') as plik:
        tresc = csv.reader(plik, delimiter=';')
        for rekord in tresc:
            rekord = [x.strip() for x in rekord]  # Usuwanie zbędnych spacji
            dane.append(rekord)
    return(dane)

def main(args):
    nazwa_bazy = 'szkola'
    con = sqlite3.connect(nazwa_bazy + '.db')    # Połączenie z bazą
    cur = con.cursor()      # Utworzenie kursora

    with open(nazwa_bazy + '.sql', 'r') as plik:
            cur.executescript(plik.read())

    dane = dane_z_pliku('szkoła_z6pr052010_uczniowie.txt')
    dane.pop(0)        # Usunięcie pierwszego elementu listy
    cur.executemany('INSERT INTO uczniowie VALUES(?, ?, ?, ?, ?, ?)', dane)

    dane = dane_z_pliku('szkoła_z6pr052010_oceny.txt')
    dane.pop(0)        # Usunięcie pierwszego elementu listy
    cur.executemany('INSERT INTO oceny VALUES(?, ?, ?, ?)', dane)
    
    dane = dane_z_pliku('szkoła_z6pr052010_przedmioty.txt')
    dane.pop(0)        # Usunięcie pierwszego elementu listy
    cur.executemany('INSERT INTO przedmioty VALUES(?, ?, ?, ?)', dane)
    
    con.commit()        # Zatwierdzenie wszystkich operacji w bazie
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
