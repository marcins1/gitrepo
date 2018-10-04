#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  figury.py
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
#  

def rysujpelnyprostokat(rozmiar, rozmiar2, znak):
    for i in range(rozmiar2):
        for j in range(rozmiar):
            print(znak, end='')
        print()
        
def rysujpustyprostokat(rozmiar, rozmiar2, znak):
    for i in range(rozmiar2):
        if i == 0 or i == rozmiar2 - 1:
            for j in range(rozmiar):
                print(znak, end='')
        else:
            for j in range(rozmiar):
                if j == 0 or j == rozmiar - 1:
                    print(znak, end='')
                else:
                    print(" ", end='')
        print()

def rysujchoinke(rozmiar, rozmiar2, znak):
    for i in range(rozmiar2):
        licznik = 0
        while licznik < rozmiar:
            print(znak, end='')
            licznik += 1
        print()

def main(args):
    x = int(input("Rozmiar x: "))
    y = int(input("Rozmiar y: "))
    znak = input("Wprowadź znak: ")
    rysujpelnyprostokat(x, y, znak)
    print()
    rysujpustyprostokat(x, y, znak)
    print()
    rysujchoinke(x, y, znak)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
