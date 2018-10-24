/*
 * euklides.cpp
 */


#include <iostream>

using namespace std;

int nwd_klasyczny(int a, int b){
    int licznik = 0;
    while(a!=b){
        if(a > b){
            a -= b;
        } else {
            b -= a;
        }
        licznik++;
    }
    cout << "Ilość powtórzeń(klasyczny): " << licznik << endl;
    return a;
}

int nwd_optymalny(int a, int b){
    int licznik = 0;
    while(a > 0){
        a %= b;
        b -= a;
        licznik++;
    }
    cout << "Ilość powtórzeń(optymalny): " << licznik << endl;
    return b;
}

//~int nwwl(int a, int b){
    //~return a*b/nwd_klasyczny(a, b);
//~}

int main(int argc, char **argv){
    int a, b;
    cout << "Podaj 2 liczby: ";
    cin >> a >> b;
    int wynik = nwd_klasyczny(a, b);
    cout << "NWD(" << a << "," << b << ") = " << wynik << endl << endl;
    wynik = nwd_optymalny(a, b);
    cout << "NWD(" << a << "," << b << ") = " << wynik << endl;
    //~wynik = nwwl(a, b);
    //~cout << "NWW(" << a << "," << b << ") = " << wynik << endl;
	return 0;
}
