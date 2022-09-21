//The sum of the squares of the first ten natural numbers is 385
//The square of the sum of the first ten natural numbers is 3025
//Hence the difference between the sum of the squares of the first ten natural numbers
//and the square of the sum is 3025-385=2640
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square 
//of the sum.

#include <iostream>
using namespace std;

int square(int number){
    int cuadrado;
    cuadrado=number*number;
    return cuadrado;
}

int main(){

int suma=0,cuadrado=0,diferencia=0;
for (int n=0; n<=10;n++){
    suma+=square(n);
}
cout << "La suma de los cuadrados de los primeros 10 digitos es: "<<suma<<endl;

for (int n=0; n<=10;n++){
    cuadrado+=n;
}
cuadrado=square(cuadrado);

cout << "El cuadrado de la suma de los primeros 10 digitos es: "<<cuadrado<<endl;

diferencia=cuadrado-suma;

cout << "La diferencia de los dos es: "<<diferencia<<endl;

suma=0,cuadrado=0,diferencia=0;
for (int n=0; n<=100;n++){
    suma+=square(n);
}
cout << "La suma de los cuadrados de los primeros 10 digitos es: "<<suma<<endl;

for (int n=0; n<=100;n++){
    cuadrado+=n;
}
cuadrado=square(cuadrado);

cout << "El cuadrado de la suma de los primeros 10 digitos es: "<<cuadrado<<endl;

diferencia=cuadrado-suma;

cout << "La diferencia de los dos es: "<<diferencia<<endl;

}
