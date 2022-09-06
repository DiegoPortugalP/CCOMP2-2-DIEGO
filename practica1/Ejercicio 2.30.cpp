#include <iostream>

using namespace std;

int main()
{
float peso, altura, imc;
    cout << "Ingrese su peso en KILOGRAMOS:" << endl;
    cin >> peso;
    cout << "Ingrese su altura en METROS:" << endl;
    cin >> altura;

imc = peso/(altura*altura);

    cout << "Su indice de masa corporal es:"<< imc<<endl;
    cout << endl;
    cout <<"VALORES DE IMC"<<endl;
    cout <<"Bajo peso: Menor a 18.5"<<endl;
    cout <<"Normal   : Entre 18.5 y 24.9"<<endl;
    cout <<"Sobrepeso: Entre 28 y 29.9"<<endl;
    cout <<"Obesidad : 30 o mayor"<<endl;


    return 0;
}
