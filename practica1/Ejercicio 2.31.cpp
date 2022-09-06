#include <iostream>

using namespace std;

int main()
{
int km, cosxgal,kmxgal,tarxparq,tarxpea;
int gastotal,gastoxmes, ahorro;
    cout << "Cuantos kilometros recorre en el dia?" << endl;
    cin>>km;
    cout << "Cuanto cuesta el galon de gasolina?" << endl;
    cin>>cosxgal;
    cout << "Cuantos kilometros rinde un galon?" << endl;
    cin>>kmxgal;
    cout << "Cuanto gasta al dia en parqueo?" << endl;
    cin>>tarxparq;
    cout << "Cuanto gasta al dia en peajes?" << endl;
    cin>>tarxpea;

    gastotal =(km/kmxgal)*cosxgal+tarxparq+tarxpea;
    gastoxmes=gastotal*22;
    ahorro = gastoxmes/4;

    cout<< ""<<endl;

    cout <<"ESTO ES LO QUE USTED GASTA ACTUALMENTE SOLO EN DIAS LABORABLES:"<<endl;
    cout << "Gastos al dia: " << gastotal<< " soles"<<endl;
    cout << "Gastos al mes: " << gastoxmes<< " soles"<< endl;

    cout<< ""<<endl;

    cout << "Usted podria ahorrar "<< ahorro <<" al mes compartiendo el automovil con 3 personas mas.\nNo lo piense mucho, utilice Car-Pool Services."<<endl;

    return 0;
}