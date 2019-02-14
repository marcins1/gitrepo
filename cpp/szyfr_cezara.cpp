/*
 * szyfr_cezara.cpp
 */


#include <iostream>
using namespace std;

#define MAKS 100

void szyfruj(char t[],int k){
    //strlen
    int kod=0;
    for(int i = 0; t[i] != '\0'; i++){
        kod=(int)t[i];
        kod+=k;
        if(kod > 122) kod-=26;
        t[i]=(char)kod;
        cout << t[i];
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
    szyfruj(tekst, klucz);
	return 0;
}

