#include <iostream>
#include "point.h"
using namespace std;

void intercambio(int &a, int &b){
    int tmp =a;
    a = b;
    b = tmp;
}

int main (){    
    int a=20;
    int b=40;
    intercambio(a,b);
    cout << a << endl; 
    cout << b << endl; 


return 0;
}