/*
 * palindromy.cpp
 */


#include <iostream>
#include <string.h>

using namespace std;

bool palindrom(char w[], int r){
    for(int i = 0; i <= r/2; i++){
        if(w[i] != w[r-i-1]) return false;
    }
    return true;
}

int main(int argc, char **argv)
{
	int roz = 20;
    char wyraz[roz];
    cout << "Podaj wyraz: ";
    cin.getline(wyraz, roz);
    if(palindrom(wyraz, strlen(wyraz))){
        cout << "Tak";
    } else {
        cout << "Nie";
    }
	return 0;
}

