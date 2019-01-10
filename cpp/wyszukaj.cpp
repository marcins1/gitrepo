/*
 * wyszukaj.cpp
 */


#include <iostream>

using namespace std;

void wypelnij(int t[], int roz){
    srand(time(NULL)); // Inicjacja generatora liczb pseudolosowych
    for(int i = 0; i < roz; i++){
        t[i] = rand() % 101;
    }
}

void drukuj(int t[], int roz){
    for(int i = 0; i < roz; i++){
        cout << t[i] << " ";
    }
    cout << endl;
}

void sort_insert(int tab[], int n){
    int i, el, k;
    for(i = 1; i < n; i++){
        el = tab[i];
        k = i - 1;
        while(k >= 0 && tab[k] > el){
            tab[k+1]=tab[k];
            k--;
        }
        tab[k+1]=el;
    }
}

int szukaj_lin(int t[], int n, int szuk){
    for(int i = 0; i < n; i++){
        if(t[i] == szuk) return i;
    }
    return -1;
}

int szukaj_bin_lin(int t[], int n, int szuk){
    int p, k, s;
    p = 0; k = n-1;
    while(p <= k){
        s = (p+k)/2;
        if(t[s] == szuk){
            p = s;
            break;
        }
        else if(szuk < t[s]) k = s - 1;
        else p = s + 1; 
    }
    return p;
}

int main(int argc, char **argv)
{
	int n = 20;
    int tab[n], szuk, indeks;
    wypelnij(tab, n);
    drukuj(tab, n);
    cout << "Podaj liczbę: "; cin >> szuk;
    sort_insert(tab, n);
    indeks = szukaj_bin_lin(tab, n, szuk);
    if (indeks>0) cout << "Znaleziono: " << indeks << endl;
    else cout << "Nie znaleziono" << indeks << endl;
    //~indeks = szukaj_lin(tab, n, szuk);
    //~if(indeks != -1) cout << "Znaleziono!";
    //~else cout << "Nie znaleziono!";
	return 0;
}

