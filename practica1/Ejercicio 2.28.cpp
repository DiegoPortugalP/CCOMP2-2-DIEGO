#include <iostream>

using namespace std;

int main()
{
int numero,inverso;
    cout << "Ingrese un entero de 4 digitos:" << endl;
    cin >> numero;

    inverso=numero%10*1000;
    numero=numero/10;

    inverso=inverso+numero%10*100;
    numero=numero/10;

    inverso=inverso+numero%10*10;
    numero=numero/10;

    inverso=inverso+numero;


    cout << "El numero invertido es:" << inverso << endl;

    return 0;
}
