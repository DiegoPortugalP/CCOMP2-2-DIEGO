//The four adjacent digits in the 1000-digit number
//that have the greatest product are 9 × 9 × 8 × 9 = 5832.
#include<iostream>
using namespace std;


int square(int number){
    int cuadrado;
    cuadrado=number*number;
    return cuadrado;
}

int main(){

int a=1,b=2,c=3,temp=0;
    while (square(c)<=1000){

        temp=square(a)*square(b);
        if (temp == square(c)){

            cout << "a b y c son triplets: "<<a<<" < "<<b<<" < "<< c<<"= "<< square(a)<<" + "<<square(b)<<" = "<< square(c)<<endl;
        }
    a++;
    b++;
    c++;
    temp=0;
    }



}