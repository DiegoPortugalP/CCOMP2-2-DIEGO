#include <iostream>

using namespace std;

int main()
{

int numero1, numero2,suma;

    cout << "Ingrese el primer numero: " << endl;
    cin >> numero1;

    cout << "Ingrese el segundo numero: " << endl;
    cin >> numero2;

if (numero1%2==0){
    cout << numero1 << " es par"<<endl;
}
else{
    cout << numero1 << " es impar"<<endl;
}
if (numero2%2==0){
    cout << numero2 << " es par"<<endl;
}
else{
    cout << numero2 << " es impar"<<endl;
}

suma=numero1+numero2;

if (suma%2==0){
    cout << suma << " es par"<<endl;
}
else{
    cout << suma << " es impar"<<endl;
}
    return 0;
}
