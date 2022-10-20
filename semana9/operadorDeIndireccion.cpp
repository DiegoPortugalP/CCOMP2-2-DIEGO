#include <iostream>
using namespace std;

 int main(){
    int a{7};
    int* aPtr = &a;
    cout << "La direccion de la variable es: " << &a << "\nEl valor de aPtr es: "<<aPtr;

    cout << "El valor de la variable es: " << a << "\nLa direccion de aPtr es: "<<*aPtr;

 }
