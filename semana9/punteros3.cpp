#include <iostream>
using namespace std;


int cuboPorReferencia(int*); // firma de la funcion

int main() {

int num{4};

cout << "El valor original del numero es " << num;

cuboPorReferencia(&num); // pasando la direccion de memoria del numero a la
                        // funcion cuboPorReferencia
cout << "\nEl nuevo valor del numero es " << num << endl;

}

// calcula el cubo de *nPtr; modifica la variable num en main
int cuboPorReferencia(int* nPtr) {

*nPtr = *nPtr * *nPtr * *nPtr; // cubo de *nPtr

}
