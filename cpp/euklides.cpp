/*
 * euklides.cpp
 */


#include <iostream>

using namespace std;

int nwdl(int a, int b){
    while(a!=b){
        if(a > b){
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

int nwwl(int a, int b){
    return a*b/nwdl(a, b);
}

int main(int argc, char **argv){
    int a, b;
    cout << "Podaj 2 liczby: ";
    cin >> a >> b;
    int wynik = nwdl(a, b);
    cout << "NWD(" << a << "," << b << ") = " << wynik << endl;
    wynik = nwwl(a, b);
    cout << "NWW(" << a << "," << b << ") = " << wynik << endl;
	return 0;
}
