/*
 * euklides.cpp
 */


#include <iostream>

using namespace std;

// nwd1()

int main(int argc, char **argv){
    int a, b;
    cout << "Podaj 2 liczby: ";
    cin >> a >> b;
    int nwd = nwd1(a, b);
    cout << "NWD(" << a << "," << b << " ) = " << nwd << endl;
	return 0;
}

