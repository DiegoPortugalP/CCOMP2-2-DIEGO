//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
//The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>
using namespace std;

int main(){
    
    cout<<"La suma de los multiplos de 3 y 5 de los primeros 10 numeros naturales es: "<<endl;

    int suma=0;
    for(int i= 1;i<10;i++){
        if (!(i%3) || !(i%5)){
            suma+=i;
        }
    }
    cout<<suma<<endl;

    cout<<"La suma de los multiplos de 3 y 5 de los primeros 1000 numeros naturales es: "<<endl;

    suma=0;

    for(int i= 1;i<1000;i++){
        if (!(i%3) || !(i%5)){
            suma+=i;
        }
    }
    cout<<suma<<endl;

    return 0;
}