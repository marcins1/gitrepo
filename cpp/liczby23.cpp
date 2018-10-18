/*
 * liczby23.cpp
 */


#include <iostream>

using namespace std;

int liczby2(){
    int licznik = 0;
    for(int i = 1; i <= 9; i++){
        for(int j = 0; j <= 9; j++){
            if(i!=j){
               cout << i << j << " ";
               licznik++; 
            }
        }
    }
    cout << endl;
    return licznik;
}

int liczby3(){
    int licznik = 0;
    for(int i=1; i<10; i++){
        for(int j=0; j<10; j++){
            for(int k=0; k<10; k++){
                if(i!=j && i!=k && k!=j){
                    cout << i << j << k << " ";
                    licznik++;
                }
            } 
        }
    }
    cout << endl;
    return licznik;
}

int main(int argc, char **argv){
	int wynik = liczby2();
    cout << "Liczb 2-cyfrowych: " << wynik << endl;
    wynik = liczby3();
    cout << "Liczb 3-cyfrowych: " << wynik << endl;
	return 0;
}

