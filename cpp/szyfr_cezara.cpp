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

void szyfruj2(char t[],int k){
    int i = 0;
    int kod=0;
    cout << "Szyfracja: "; 
    while(!t[i]=='\0'){
        kod = (int)t[i];
        if (t[i] == ' '){
            cout << t[i];
        } else if(kod < 91){
            kod += k;
            if(kod > 90) kod-=26;
        } else {
            kod += k;
            if(kod > 122) kod-=26;
        }
        cout << (char)kod;
        t[i] = (char)kod;
        i++;
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
    //zamien(tekst);
    szyfruj2(tekst, klucz);
    //deszyfruj(tekst, klucz);
	return 0;
}
