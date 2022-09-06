#include <iostream>
using namespace std;
int main() 
{
    // Ejercicio 2.20

    int rad=0,dia=0,cir=0,are=0 ;
    cout << "Ingrese el radio del circulo:\n"<<endl;
    cin >> rad;
    
    dia= rad*2;
    cir=dia*3.14159;
    are= 3.14159 * (rad*rad);

    cout << "\n\nCalculando... \n\nEl Diametro del circulo es dos veces su radio:"<<endl;
    cout << rad <<" Multiplicado por 2 es igual a "<< dia <<endl;
    
    cout << "\n\nCalculando... \n\nLa Circunferencia del circulo es el producto de su diametro por pi:"<<endl;
    cout << dia <<" Multiplicado por pi es igual a "<< cir <<endl;

    cout << "\n\nCalculando... \n\nEl Area del circulo es el producto de pi por el radio del circulo al cuadrado:"<<endl;
    cout << 3.14159 <<" Multiplicado por el radio al cuadrado es igual a "<< are <<endl;
    

    return 0;
}