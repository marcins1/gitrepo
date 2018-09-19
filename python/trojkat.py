#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  trojkat.py
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

def trojkat(a, b, c):
    """
    Funkcja bada możliwość zbudowania trójkąta z trzech podanych boków
    Funkcja zwraca True jeżeli się da, False w przeciwnym wypadku
    """
    if a<b+c and b<a+c and c<a+b:
        return True
        
    return False
        
    
def main(args):
    # ~a = int(input("Podaj bok a: "))
    # ~b = int(input("Podaj bok b: "))
    # ~c = int(input("Podaj bok c: "))
    
    # ~if trojkat(a, b, c):
        # ~print("Z tych boków da się zbudować trójkąt")
    # ~else:
        # ~print("Z tych boków nie da się zbudować trójkąta")
    assert(trojkat(3, 4, 5) == True)
    assert(trojkat(3, 4, 1) == False)
        
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
