/*
 * silnia.cpp
 */


#include <iostream>

using namespace std;

int silnia_it(int a){
    int wynik = 1;
    for(int i=1; i<a+1; i++) wynik *= i;
    return wynik;
}

int silnia_re(int a){
    if(a==1) return 1;
    return a*silnia_re(a-1);
}

int main(int argc, char **argv){
    int a;
    cout << "Podaj podstawę: ";
    cin >> a;
	cout << "Silnia liczby " << a << " wynosi " << silnia_it(a) << endl;
    cout << "Silnia liczby " << a << " wynosi " << silnia_re(a) << endl;
	return 0;
}

