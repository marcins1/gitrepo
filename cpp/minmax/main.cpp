#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

void minmax1(){
    char dalej = 't';
    int liczba = 0;
    int min, max;
    cout << "Podaj liczbę: ";
    cin >> liczba;
    min = max = liczba;
    while(dalej == 't'){
        cout << "Podaj liczbę: ";
        cin >> liczba;
        if(liczba < min) min = liczba;
        if(liczba > max) max = liczba;
        cout << "Następna (t/n)? ";
        cin >> dalej;
    }
    cout << "Najmniejsza: " << min << endl;
    cout << "Największa: " << max << endl;
}

void wypelnij(int t[], int roz){
    cout << "Podaj " << roz << " liczb." << endl;
    for(int i = 0; i < roz; i++){
        cin >> t[i];
    }
}

void drukuj(int t[], int roz){
    for(int i = 0; i < roz; i++){
        cout << t[i] << " ";
    }
    cout << endl;
}

void wypelnij_los(int t[], int roz){
    srand(time(NULL)); // Inicjacja generatora liczb pseudolosowych
    for(int i = 0; i < roz; i++){
        t[i] = rand() % 101;
    }
}

int min(int tab[], int roz){
    int min = tab[0];
    for(int i=1; i < roz; i++){
        if(tab[i] < min){
            min = tab[i];
        }
    }
    return min;
}

int max(int tab[], int roz){
    int max = tab[0];
    for(int i=1; i < roz; i++){
        if(tab[i] > max){
            max = tab[i];
        }
    }
    return max;
}

int main()
{
    int rozmiar = 50;
    int tab[rozmiar];
    wypelnij_los(tab, rozmiar);
    drukuj(tab, rozmiar);
    cout << "\nMin: " << min(tab, rozmiar) << endl;
    cout << "\nMax: " << max(tab, rozmiar) << endl;
    //minmax1();
    return 0;
}
