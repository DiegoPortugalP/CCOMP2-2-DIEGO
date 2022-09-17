#include <iostream>
#include "MotorVehicle.h"

using namespace std;

int main() {
    MotorVehicle vehicle1{"Toyota", "Gris",1984};
    MotorVehicle vehicle2{"Volkswagen", "Blanco",1990};

    cout<<"Ingrese el tipo de combustible del vehiculo 1: "<<endl;
    string fuelType;
    cin >> fuelType;
    vehicle1.setfuel(fuelType);

    cout<<"Ingrese el tipo de combustible del vehiculo 2: "<<endl;
    cin >> fuelType;
    vehicle2.setfuel(fuelType);

    cout<<"Ingrese la capacidad el motor del vehiculo 1: "<<endl;
    int engineCapacity;
    cin >> engineCapacity;
    vehicle1.setengineCapacity(engineCapacity);

    cout<<"Ingrese la capacidad el motor del vehiculo 2: "<<endl;
    cin >> engineCapacity;
    vehicle2.setengineCapacity(engineCapacity);


    cout << "Detalles del Vehiculo1: "<< endl;
    vehicle1.displayCarDetails();
    cout << "Detalles del Vehiculo2: "<< endl;
    vehicle2.displayCarDetails();

    return 0;
    
}