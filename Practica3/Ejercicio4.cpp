//A palindromic number reads the same both ways. 
//The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers.


#include <iostream>
using namespace std;


bool espalindrome(int palindrome){

int dig=0,palindrome1=palindrome,palindrome2=palindrome,inverso=0,temp=0;
    while (palindrome1>=1){
        palindrome1=palindrome1/10;
        dig+=1;
    }

while (palindrome2>=1){
       temp=palindrome2;
       temp=temp%10;    
          for (int n=1;n<dig;n++){
               temp=temp*10;
          }
        inverso+=temp;
        dig-=1;
        palindrome2=palindrome2/10;  
}

if (palindrome==inverso){
    return true;
}
else {;
     return false;
    }
}


int main(){

int dosdig1=10,evaluar,mayor;

    while (dosdig1<=99){
        for(int n=10;n<=99;n++){
            evaluar=dosdig1*n;
            if(espalindrome(evaluar)){
                mayor=evaluar;
            }
        }
        dosdig1++;
    }

    cout<<"El mayor palindrome de la multiplicacion de numeros de dos digitos es: "<<mayor<<endl;

dosdig1=1,evaluar=0,mayor=0;

    while (dosdig1<=999){
        for(int n=600;n<=999;n++){
            evaluar=dosdig1*n;
            if(espalindrome(evaluar)){
                mayor=evaluar;
            }
        }
        dosdig1++;
    }

    cout<<"El mayor palindrome de la multiplicacion de numeros de tres digitos es: "<<mayor<<endl;


}