/*
 * algorytm3.cpp
 */


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int znajdz(int a[], int lelementow, int szukana){
    for(int i = 0; i < lelementow; i++){
        if(a[i] == szukana) return i;
    }
    return -1;
}

void tliczblosowych(int a[], int lelementow){
    srand(time(NULL));
    for(int i = 0; i < lelementow; i++){
        a[i] = rand() % 51;
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(int argc, char **argv)
{
    int n = 25;
    int a[n];
    int x = 1;
    tliczblosowych(a, n);
    cout << "Szukana: " << x << endl; 
    cout << znajdz(a, n, x);
	return 0;
}

