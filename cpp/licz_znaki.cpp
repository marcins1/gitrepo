/*
 * znaki.cpp
 */


#include <iostream>
#include <string.h>

using namespace std;

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

int zlicz(char tb[]){
    int i = 0;
    while (tb[i] != '\0') i++;
    return i;
}

void ascii(char tb[], int roz){
    int kod = 0;
    for(int i = 0; i < roz; i++){
        kod = (int)tb[i];
        if(kod > 96 && kod < 123){
            cout << (char)(kod-32);
        }else if(kod > 64 && kod < 91){
            cout << (char)(kod+32);
        }else{
            cout << tb[i];
        }
    }
}

void odwroc(char tb[], int roz){
    for(int i = roz-1; i >= 0; i--){
        cout << tb[i];
    }
}

int main(int argc, char **argv)
{
    const int rozmiar = 20;
    char znaki[rozmiar];
    cin.getline(znaki, rozmiar);
    //licz_znaki(znaki, rozmiar);
    //ilosc = cin.gcount();
    //ilosc = zlicz(znaki);
    int ilosc = 0;
    ilosc = strlen(znaki);
    //ascii(znaki, ilosc);
    odwroc(znaki, ilosc);
	return 0;
}

