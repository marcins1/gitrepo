/*
 * suma-cyfr.cpp
 */


#include <iostream>

using namespace std;

int sumujcyfry(int x){
    int suma = 0;
    while(x != 0){
        suma += x % 10;
        x/=10;
    }
    return suma;
}

int main(int argc, char **argv){
	int liczba = 0;
    while(liczba < 10){
        cout << "Podaj liczbę minimum dwucyfrową: ";
        cin >> liczba; 
    }
    cout << "Suma cyfr: " << sumujcyfry(liczba);
    
	return 0;
}

