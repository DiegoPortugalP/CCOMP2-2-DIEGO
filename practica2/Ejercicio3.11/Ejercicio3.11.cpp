#include <iostream>
#include "MotorVehicle.h"

using namespace std;

int main() {
    MotorVehicle vehicle1{"Toyota", "Gris",1984};
 
 
    cout << "Detalles del Vehiculo1: "<< endl;
    vehicle1.displayCarDetails();

    cout<<"Ingrese la marca del vehiculo 1: "<<endl;
    string marca;
    cin >> marca;
    vehicle1.setmakeName(marca);

    cout<<"Ingrese el tipo de combustible del vehiculo 1: "<<endl;
    string fuelType;
    cin >> fuelType;
    vehicle1.setfuel(fuelType);

    cout<<"Ingrese la capacidad el motor del vehiculo 1: "<<endl;
    int engineCapacity;
    cin >> engineCapacity;
    vehicle1.setengineCapacity(engineCapacity);

    cout<<"Ingrese el anio de fabricacion del vehiculo 1: "<<endl;
    int aniodefabricacion;
    cin >> aniodefabricacion;
    vehicle1.setyear(aniodefabricacion);

    cout<<"Ingrese el color del vehiculo 1: "<<endl;
    string color;
    cin >> color;
    vehicle1.setcolor(color);


    cout << "Detalles del Vehiculo1: "<< endl;
    vehicle1.displayCarDetails();

    cout<<"obteniendo los detalles del vehiculo1 con getters.... "<<endl;

    cout<<vehicle1.getmakeName()<<"//"<< vehicle1.getfuel()<<"//"<< vehicle1.getyear()<<"//"<< vehicle1.getcolor() <<"//"<<vehicle1.getengineCapacity()<<endl;

  

    return 0;
    
}