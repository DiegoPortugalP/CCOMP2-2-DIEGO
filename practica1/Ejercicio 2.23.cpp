#include <iostream>
using namespace std;
int main() 
{

    // Ejercicio 2.23

    int a=0,b=0,c=0,d=0,e=0,mayor=0,menor=0;
    cout<< "Ingrese 5 numero enteros: "<<endl;
    cin >> a>>b>>c>>d>>e;

    if (a >= b && a>=c && a>=d && a>=e){    
        mayor=a;
    }
    else if (b >= a && b>=c && b>=d && b>=e){    
        mayor=b;
    }
     else if (c >= a && c>=b && c>=d && c>=e){    
        mayor=c;
    }
     else if (d >= a && d>=b && d>=c && d>=e){    
        mayor=d;
    }
     else {    
        mayor=e;
    }

    if (a <= b && a<=c && a<=d && a<=e){    
        menor=a;
    }
    else if (b <= a && b<=c && b<=d && b<=e){    
        menor=b;
    }
     else if (c <= a && c<=b && c<=d && c<=e){    
        menor=c;
    }
     else if (d <= a && d<=b && d<=c && d<=e){    
        menor=d;
    }
     else {    
        menor=e;
    }


    cout <<"De los numeros ingresados el mayor es: " << mayor <<" Y el menor es: "<<menor<< endl;

    return 0;
}