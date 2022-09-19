#include <iostream>
#include "Date.h"

using namespace std;

int main(){

    Date date1{23, 2011,1984};

    date1.displayDate();

    cout<<"Ingrese el dia, el mes y el anio:"<<endl;
    int dia,mes,anio;
    cin>>dia>>mes>>anio;

    date1.setDay(dia);
    date1.setMonth(mes);
    date1.setYear(anio);

    date1.displayDate();

    cout<<"Ingrese el dia, el mes y el anio nuevamente:"<<endl;

    cin>>dia>>mes>>anio;
    
    date1.setDay(dia);
    date1.setMonth(mes);
    date1.setYear(anio);

    cout<<"obteniendo la fecha con getters.... "<<endl;

    cout<< date1.getDay()<<"//"<<date1.getMonth()<<"//"<< date1.getYear()<<endl;
    
}
