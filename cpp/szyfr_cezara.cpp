/*
 * szyfr_cezara.cpp
 */


#include <iostream>
using namespace std;

#define MAKS 100

void deszyfruj(char t[],int k){
    cout << "Deszyfracja: "; 
    int kod=0;
    for(int i = 0; t[i] != '\0'; i++){
        if (!(t[i]==' ')){
            kod=(int)t[i] - k;
            if(kod < 97) kod+=26;
            t[i]=(char)kod;
            cout << t[i];
        } else cout << ' ';
    }
}

void szyfruj(char t[],int k){
    cout << "Szyfracja: "; 
    int kod=0;
    for(int i = 0; t[i] != '\0'; i++){
        if (!(t[i]==' ')){
            kod=(int)t[i] + k;
            if(kod > 122) kod-=26;
            t[i]=(char)kod;
            cout << t[i];
        } else cout << ' ';
    }
    cout << endl;
}

void zamien(char t[]){
    int kod=0;
    for(int i = 0; t[i] != '\0'; i++){
        kod=(int)t[i];
        if (kod > 64 && kod < 91) t[i]=(char)kod+32;
    }
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
    zamien(tekst);
    szyfruj(tekst, klucz);
    deszyfruj(tekst, klucz);
	return 0;
}

