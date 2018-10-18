/*
 * figury.cpp
 */


#include <iostream>

using namespace std;

void rysujpp(int x, int y, char znak){
    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            if(j==0 || j==x-1 || i==0 || i==y-1){
                cout << znak;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main(int argc, char **argv){
	int a, b;
    char znak;
    cout << "Wprowadż rozmiar x: ";
    cin >> a;
    cout << "Wprowadź rozmiar y: ";
    cin >> b;
    cout << "Wprowadź znak: ";
    cin >> znak;
    rysujpp(a, b, znak);
    
	return 0;
}

