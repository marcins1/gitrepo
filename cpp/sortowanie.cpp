/*
 * sortowanie.cpp
 */


#include <iostream>
#include <cstdlib>
#include <ctime>

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

void zamien2(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void zamien(int tab[], int i){
    int tmp = tab[i];
    tab[i] = tab[i+1];
    tab[i+1] = tmp;
}

void sort_bubble(int tab[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(tab[j] < tab[j+1]){
                zamien(tab, j);
            }
        }
    }
}

void sort_selection(int tab[], int n){
    int i, k, j;
    for(i = 0; i < n - 1; i++){
        k = i; // indeks najmniejszego elementu
        for(j = k + 1; j < n; j++){
            if(tab[j] < tab[k]){
                k = j;
            }
        }
        zamien2(tab[i], tab[k]);
    }
}

void sort_insert(int tab[], int n){
    int i, el, k, j;
    for(i = 1; i < n - 1; i++){
        el = tab[i];
        k = i - 1; // Indeks porównywanego elementu z części posortowanej 
        while(k >= 0 && tab[k] > el){
            zamien2(tab[k], tab[k-1]);
            k--;
        }
        ;
    }
}

int main(int argc, char **argv){
	int roz = 25;
    int tab[roz];
    wypelnij(tab, roz);
    drukuj(tab, roz);
    sort_selection(tab, roz);
    cout << endl;
    drukuj(tab, roz);
	return 0;
}

