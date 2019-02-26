/*
 * szyfr_vigenera.cpp
 */


#include <iostream>
#include <string.h>
using namespace std;

#define MAKS 100

void szyfruj(char tbt[], char tbk[], int dt, int dk){
    cout << "Szyfrowanie: ";
    int kod = 0;
    for(int i = 0; i < dt; i++){
        kod = (int)tbt[i] + (int)tbk[i % dk] - 65;
        if (kod > 90) kod -= 26;
        tbt[i] = (char)kod;
        cout << tbt[i];
    }
    cout << endl;
}

void deszyfruj(char tbt[], char tbk[], int dt, int dk){
    cout << "Deszyfrowanie: ";
    int kod = 0;
    for(int i = 0; i < dt; i++){
        kod = (int)tbt[i] - (int)tbk[i % dk] + 65;
        if (kod < 65) kod += 26;
        tbt[i] = (char)kod;
        cout << tbt[i];
    }
    cout << endl;
}

int main(int argc, char **argv)
{
	char tekst[MAKS];
    char klucz[MAKS];

    cout << "Podaj tekst: ";
    cin.getline(tekst, MAKS);
    cout << "Podaj klucz: ";
    cin.getline(klucz, MAKS);

    int dtekstu = strlen(tekst);
    int dklucza = strlen(klucz);
    szyfruj(tekst, klucz, dtekstu, dklucza);
    deszyfruj(tekst, klucz, dtekstu, dklucza);
	return 0;
}

