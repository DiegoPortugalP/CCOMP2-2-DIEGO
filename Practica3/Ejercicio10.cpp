//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//Find the sum of all the primes below two million.


#include <iostream>
using namespace std;

bool esprimo(long long int primo){

    long long int  i=2;
    while (i<=primo/2){
        if (primo%i==0){
            return false;
        }
        i++;
    }
    return true;
    }

int main(){

long long int suma=0;

    for(long long int n=1;n<=10000000000000000000;n++){
        if (esprimo(n)){
        suma+=n;
        }
    
        if(n>=10){
            cout<<"La suma de los primos debajo de 10 es: "<<suma-1<<endl;
            break;
        }
    }


suma=0;

    for(long long int n=1;n<=10000000000000000000;n++){
        if (esprimo(n)){
        cout<<n<<endl;
        suma+=n;
         
        }
    
        if(n>=2000000){
            cout<<"La suma de los primos debajo de 2000000 es: "<<suma-1<<endl;
            break;
        }
    }
}