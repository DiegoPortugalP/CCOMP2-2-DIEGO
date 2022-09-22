//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?


#include <iostream>
using namespace std;

int main(){   
long long int number=0,divisores=0;

while (true){
    for(long long int n=1;n<=21;n++){
        if (number%n==0){
            divisores+=1;
        }
    }
    
    if(divisores==20){
        
        break;
    }
    else {
        divisores=0;
    }
    number++;
}

cout<< "El menor numero que puede ser dividido por los numeros del 1 al 10 es: "<< number<<endl;

}