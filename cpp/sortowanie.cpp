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

void zamien(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void sort_bubble(int tab[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(tab[j] > tab[j+1]){
                zamien(tab[j], tab[j+1]);
            }
        }
    }
}

int main(int argc, char **argv){
	int roz = 20;
    int tab[roz];
    wypelnij(tab, roz);
    drukuj(tab, roz);
    sort_bubble(tab, roz);
    drukuj(tab, roz);
	return 0;
}

