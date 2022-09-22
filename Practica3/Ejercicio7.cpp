//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//What is the 10 001st prime number?
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

int main(){

long long int cont=0,number=0;

    for(long long int n=1;n<=10000000000000000000;n++){
        if (esprimo(n)){
            cont+=1;
        }
    
        if(cont==6){
            cout<<"El 6to numero primo es: "<<n<<endl;
            break;
        }
    }

 cont=0;

    while(true){
        if (esprimo(number)){
            cont+=1;
        }
    
        if(cont==10001){
            cout<<"El 10001st numero primo es: "<<number<<endl;
            break;
        }
    number++;
    }

}  