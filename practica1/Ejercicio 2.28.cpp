#include <iostream>

using namespace std;

int main()
{
int numero,inverso,m,c,d,u;
    cout << "Ingrese un entero de 4 digitos:" << endl;
    cin >> numero;

    inverso=numero%10*1000;
    numero=numero/10;
    u=inverso;

    inverso=inverso+numero%10*100;
    numero=numero/10;
    d=inverso;

    inverso=inverso+numero%10*10;
    numero=numero/10;
    c=inverso;

    inverso=inverso+numero;
    m=inverso;

// 6541
// 6   5    
//   cout << "El numero invertido es:" << inverso << endl;
    cout<<  "El numero invertido es:" << u<<"\t" << d<<"\t" << c<<"\t" << m<< endl;
    return 0;
}
