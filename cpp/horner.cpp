/*
 * horner.cpp
 */
 
 
#include <iostream>

using namespace std;

//W(x)= 2x^3+3x^2+5x+4 =>6
//W(x)= x(2x^2+3x+5)+4 
//W(x)=x(x(2x+3)+5)+4 =>3

float horner_it(float x, int stopien, float tbwsp[]){
    float wynik=tbwsp[0];
    for(int i=1;i<=stopien;i++){
        wynik=x*wynik+tbwsp[i];
    }
    return wynik;
}

float horner_rek(float x, int stopien, float tbwsp[]){
    if(stopien==0)
        return tbwsp[0];
    return horner_rek(x,stopien-1,tbwsp)*x + tbwsp[stopien];
}

void drukujw(int stopien, float tb[]){
    for(int i=0;i<stopien;i++){
        cout<<tb[i]<<"x^"<<stopien-i<<" + ";
    }
    cout<<tb[stopien]<<endl;
}


int main(){
    int stopien;
    float x;
	cout <<"Stopień wielomianu: ";
    cin>>stopien;
    
    float *tbwsp;
    
    tbwsp=new float [stopien+1];
    

    for(int i=0;i<=stopien;i++){
        cout <<"Podaj wspolczynik przy potędze "<<stopien-i<<": ";
        cin>>tbwsp[i];
    }
    cout<<"Argument: ";
    cin>>x;
    
    cout<<"Wartość wielomianu o postaci: ";
    drukujw(stopien, tbwsp);
    cout<<"wynosi: "<<horner_it(x, stopien, tbwsp);
    
    //horner(tbwsp, stopien);
    
    delete [] tbwsp;
    
	return 0;
}
