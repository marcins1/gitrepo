#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  suma-cyfry.py
#  
#  Copyright 2018  <>
#  
#  This program is free software; you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2 of the License, or
#  (at your option) any later version.
#  
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#  
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
#  MA 02110-1301, USA.
#  
#  Napisz program. który sumuje cyfry podanej liczby (minimum dwucyfrowej) i wyświetla ich sumę w terminalu.

# ~def sumujcyfry(liczba):
    # ~suma = 0
    # ~while liczba != 0:
        # ~suma += liczba % 10
        # ~liczba = int(liczba / 10)
    # ~return suma

def main(args):
    # ~liczba = 0
    # ~while liczba < 10 and liczba > -10:
        # ~liczba = int(input("Wprowadź liczbę conajmniej dwucyfrową: "))
    # ~if liczba < 0:
        # ~liczba = liczba * -1
    # ~print("Suma cyfr:", sumujcyfry(liczba))
    
    
    liczba = "0"
    while int(liczba) < 10:
        liczba = input("Wprowadź liczbę większą od 9: ")
    suma = 0
    for i in range(len(liczba)):
        suma += int(liczba[i])
    print("Suma cyfr:", suma)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
