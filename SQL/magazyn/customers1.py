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


def main(args):
    nazwa_bazy = 'customers'
    con = sqlite3.connect(nazwa_bazy + '.db')    # Połączenie z bazą
    cur = con.cursor()      # Utworzenie kursora

    with open(nazwa_bazy + '.sql', 'r') as plik:
            cur.executescript(plik.read())      # Tworzenie tabel w bazie

    dane = dane_z_pliku('dane_subscriptions.txt')
    dane.pop(0)        # Usunięcie pierwszego elementu listy
    cur.executemany('INSERT INTO tbSubscriptions VALUES(?, ?, ?, ?)', dane)
    
    dane = dane_z_pliku('dane_orders.txt')
    dane.pop(0)        # Usunięcie pierwszego elementu listy
    cur.executemany('INSERT INTO tbOrders VALUES(?, ?, ?, ?)', dane)
    
    dane = dane_z_pliku('dane_customers.txt')
    dane.pop(0)        # Usunięcie pierwszego elementu listy
    cur.executemany('INSERT INTO tbCustomers VALUES(?, ?, ?)', dane)
    
    con.commit()        # Zatwierdzenie wszystkich operacji w bazie
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
