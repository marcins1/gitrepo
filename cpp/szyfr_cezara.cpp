/*
 * szyfr_cezara.cpp
 */


#include <iostream>
using namespace std;

#define MAKS 100

void szyfruj(char t[],int k){
    cout << "Szyfracja: ";
    int kod=0;
    for(int i = 0; t[i] != '\0'; i++){
        if (!(t[i]==' ')){
            kod=(int)t[i];
            if(kod > 64 && kod < 91){
                kod=(int)t[i] + k;
                if(kod >= 91) kod-=26;
                t[i]=(char)kod;
            } else if(kod > 96 && kod < 123){
                kod=(int)t[i] + k;
                if(kod >= 123) kod-=26;
                t[i]=(char)kod;
            }
        }
        cout << t[i];
    }
    cout << endl;
}

void deszyfruj(char t[],int k){
    cout << "Deszyfracja: ";
    int kod=0;
    for(int i = 0; t[i] != '\0'; i++){
        if (!(t[i]==' ')){
            kod=(int)t[i];
            if(kod > 64 && kod < 91){
                kod=(int)t[i] - k;
                if(kod <= 64) kod+=26;
                t[i]=(char)kod;
            } else if(kod > 96 && kod < 123){
                kod=(int)t[i] - k;
                if(kod <= 96) kod+=26;
                t[i]=(char)kod;
            }
        }
        cout << t[i];
    }
    cout << endl;
}

int main(int argc, char **argv)
{
	char tekst[MAKS];
    int klucz = 0;

    cout << "Podaj tekst: ";
    cin.getline(tekst, MAKS);
    cout << "Podaj klucz: ";
    cin >> klucz;
    klucz = klucz % 26;
    szyfruj(tekst, klucz);
    deszyfruj(tekst, klucz);
	return 0;
}
