#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sqlite3
import csv


def dane_z_pliku(nazwa_pliku):
    dane = []       # Pusta lista na dane
    with open(nazwa_pliku, newline='', encoding='utf-8') as plik:
        tresc = csv.reader(plik, delimiter='\t')
        for rekord in tresc:
            rekord = [x.strip() for x in rekord]  # Usuwanie zbędnych spacji
            dane.append(rekord)
    return(dane)


def kwerenda1(cur):
    cur.execute("""
        SELECT name, year, genre, rating
        FROM filmy
        WHERE year BETWEEN 1990 AND 1999 AND genre = 'romance'
        ORDER BY rating
        DESC
        LIMIT 2, 3;
    """)

    wyniki = cur.fetchall()
    for rekord in wyniki:
        print(rekord)


def main(args):
    con = sqlite3.connect('filmy.db')
    cur = con.cursor()      # Utworzenie kursora

    with open('filmy.sql', 'r') as plik:
            cur.executescript(plik.read())

    filmy = dane_z_pliku('filmy.txt')
    filmy.pop(0)        # Usunięcie pierwszego elementu listy
    cur.executemany('INSERT INTO filmy VALUES(?, ?, ?, ?, ?)', filmy)
    kwerenda1(cur)
    con.commit()        # Zatwierdzenie wszystkich operacji w bazie
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
