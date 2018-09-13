/*
 * wejscie-wyjscie.cpp
 */

#include <iostream>
using namespace std;

int dodaj(int a, int b)
{
    return a+b;
}
int odejmij(int a, int b)
{
    return a-b;
}
int pomnoz(int a, int b)
{
    return a*b;
}
float podziel(float a, float b)
{
    return a/b;
}

int main()
{	
	float a,b;
    
    cout<<"Podaj 1 liczbę: ";
    cin>>a;
    cout<<a<<endl;
    
    cout<<"Podaj 2 liczbę: ";
    cin>>b;
    cout<<b<<endl;

    cout<<"Suma liczb a i b wynosi: "<<dodaj(a, b)<<endl;
    cout<<"Roznica liczb a i b wynosi: "<<odejmij(a, b)<<endl;
    cout<<"Iloczyn liczb a i b wynosi: "<<pomnoz(a, b)<<endl;
    cout<<"Iloraz liczb a i b wynosi: "<<podziel(a, b)<<endl;
	
	return 0;
}

