//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?

#include <iostream>
using namespace std;

bool esprimo(long long int primo){

    long long int  i=1,cuantos=0;
    while (i<=primo){
        if (primo%i==0){
            cuantos+=1;
        }
        i++;
    }
    
    if (cuantos==2){
        return true;
    }
    else {
        return false;
    }
    }

bool esprimo2(long long primo){

    long long factor=2;
    while (factor<=primo/2){
        if (!(primo%factor)){
            return false;
        }
        factor++;
    }
    return true;
}
int main(){

long long int largest=0;

    for (long long int  i=1;i<=13195;i++){
        if (13195%i==0){
            //cout<<i<< " es divisor de 13195"<<endl;
                if (esprimo2(i)){
                    largest=i;
                }     
        }
    }

cout<<"El factor primo mas grande de 13195 es: "<<largest<<endl;

largest=0;

    for (long long int i=1;i<=600851475143;i++){
        if (600851475143%i==0){
            cout<<i<< " es divisor de 600851475143"<<endl;
                if (esprimo2(i)){
                    largest=i;
                }  
            cout<<largest<< " es factor primo"<<endl;
        }
    }

cout<<"El factor primo mas grande de 600851475143 es: "<<largest<<endl;

// tarda demasiado en calcular 

    
}