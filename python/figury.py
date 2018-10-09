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
        for j in range(rozmiar):
            if j == 0 or j == rozmiar - 1 or i == 0 or i == rozmiar2 -1:
                print(znak, end='')
            else:
                print(" ", end='')
        print()

def rysujchoinke(wysokosc, znak):
    for i in range(wysokosc):
        for j in range(i + 1):
            print(znak, end='')
        print()

def rysujchoinke2(wysokosc, znak):
    for i in range(wysokosc):
        for j in range(wysokosc - i):
            print(znak, end='')
        print()
        
def rysujtrojkat(wysokosc, znak):
	for i in range(wysokosc):
		for j in range(i + wysokosc):
			if j < wysokosc - i - 1:
				print(" ", end='')
			else:
				print(znak, end='')
		print()
        
def main(args):
    x = int(input("Rozmiar x / wysokosc: "))
    y = int(input("Rozmiar y: "))
    znak = input("Wprowadź znak: ")
    rysujpelnyprostokat(x, y, znak)
    print()
    rysujpustyprostokat(x, y, znak)
    print()
    rysujchoinke(x, znak)
    print()
    rysujchoinke2(x, znak)
    print()
    rysujtrojkat(x, znak)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
