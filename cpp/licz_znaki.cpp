/*
 * znaki.cpp
 */


#include <iostream>

using namespace std;

void zamien_znaki(char tb[], int roz){
    for(int i = 0; i< roz; i++){
    // Zamień małe litery na duże
    }
}

void licz_znaki(char tb[], int roz){
    int i = 0;
    int cyfry, literyD, literyM, reszta;
    cyfry = literyD = literyM = reszta = 0;

    int znak_kod = 0; // kod ASCII badanego znaku
    
    while (tb[i] != '\0'){
        znak_kod = (int)tb[i];
        if(znak_kod > 64 && znak_kod < 91) literyD++;
        else if (znak_kod > 96 && znak_kod < 123) literyM++;
        else if (znak_kod > 47 && znak_kod < 58) cyfry++;
        else reszta++;
        i++; // Inkrementacja indeksu
    }
    cout << "Duże: " << literyD << endl
    << "Małe: " << literyM << endl
    << "Cyfry: " << cyfry << endl
    << "Reszta: " << reszta << endl;
}

int main(int argc, char **argv)
{
    const int rozmiar = 20;
    char znaki[rozmiar+1];
    cin.getline(znaki, rozmiar+1);
    licz_znaki(znaki, rozmiar+1);
	return 0;
}

