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

void sort_bubble(int tab[], int n){
    for(;;){
        for(;;){
            //~if(tab[i] > tab[i+1]){
                //~zamien1
            //}
        }
    }
}

void zamien(int &a, int &b){
    cout << a << " " << b << endl;
    int tmp = a;
    a = b;
    b = tmp;
    cout << a << " " << b << endl; 
}

int main(int argc, char **argv)
{
	int roz = 20;
    int tab[roz];
    wypelnij(tab, roz);
    drukuj(tab, roz);
    cout << endl;
    tab[0] = 7;
    tab[1] = 5;
    zamien(tab[0], tab[1]);
	return 0;
}

