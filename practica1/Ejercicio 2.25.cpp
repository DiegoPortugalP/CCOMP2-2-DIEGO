#include <iostream>

using namespace std;

int main()
{
int numero1, numero2, numero3;
    cout << "Ingrese el primer numero:" << endl;
    cin >> numero1;
    cout << "Ingrese el segundo numero:" << endl;
    cin >> numero2;
    cout << "Ingrese el tercer numero:" << endl;
    cin >> numero3;

    if (numero3%numero1==0){
        cout<<numero1<< " es divisor de "<< numero3<<endl;
    }
    else {
        cout<<numero1<< " no es divisor de "<< numero3<<endl;
    }

    if (numero3%numero2==0){
        cout<<numero2<< " es divisor de "<< numero3<<endl;
    }
    else {
        cout<<numero2<< " no es divisor de "<< numero3<<endl;
    }

    return 0;
}