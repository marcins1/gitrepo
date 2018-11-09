/*
 * anagramy.cpp
 * 
 * Copyright 2018  <>
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv){
	char wyraz[] = "ryba";
    int r = 4;
    //int licznik;
    //licznik = 0;
    int i1, i2, i3, i4;
    i1 = i2 = i3 = i4 = 0;
    // 0123
    for(i1 = 0; i1 < r; i1++){
        for(i2 = 0; i2 < r; i2++){
            for(i3 = 0; i3 < r; i3++){
                //licznik++;
                if((i1 == i2) || (i1 == i3) || (i2 == i3)) continue;
                i4 = 6 - i1 - i2 - i3;
                cout << wyraz[i1] << wyraz[i2] << wyraz[i3] << wyraz[i4] << endl;
            }
        }
    }
    //cout << endl << licznik;
	return 0;
}

