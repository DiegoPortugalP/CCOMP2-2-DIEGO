#include <iostream>
using namespace std;

 int main(){


    int y = 20;
    int &ref =y;
    int *ptr = &y;
 
    cout << ref <<endl; //20
    ++ref;
    cout << y << endl; //21
    *ptr=100;

    cout << ptr <<endl; //DIRECCION DE MEMORIA DE LA VARIABLE "Y"
    cout << *ptr <<endl;//100

    cout << ref <<endl;//100
    
    return 0;












 }