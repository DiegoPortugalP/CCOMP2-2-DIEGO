#include <iostream>

using namespace std;

int main()
{
    float edad,fcm1,fcm2,fcm3,fcm4;
    cout << "Ingrese su edad porfavor:" << endl;
    cin >> edad;

    fcm1=220-edad;
    fcm2=208-(0.7*edad);
    fcm3=207-(0.7*edad);
    fcm4=211-(0.64*edad);

    cout << "Su frecuencia cardiaca maxima deberia ser:"<<endl;
    cout << "FCM (Formula estandar): "<<fcm1<<endl;
    cout << "FCM (Formula alternativa 1): "<<fcm2<<endl;
    cout << "FCM (Formula alternativa 2): "<<fcm3<<endl;
    cout << "FCM (Formula alternativa 3): "<<fcm4<<endl;

    cout<<""<< endl;

    cout << "Si usted es una persona joven se recomienda usar la formula estandar, de lo contrario las formulas alternativas 1 y 2 resultarian mas convenientes.";

    return 0;

}
