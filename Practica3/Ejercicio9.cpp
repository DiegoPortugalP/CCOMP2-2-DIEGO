//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
//a**2 + b**2 = c**2
//For example, 3**2 + 4**2 = 9 + 16 = 25 = 5**2.
//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.

#include<iostream>
using namespace std;


long long int square(int number){
    long long int cuadrado;
    cuadrado=number*number;
    return cuadrado;
}

int main(){

long long int a=1,b=1,c=1,temp=0;
    while (a<1000){

        while (b<1000){

            while (c<1000){
        
                temp=square(a)+square(b);

                if (temp == square(c)){

                    cout << "a b y c son triplets: "<<a<<" < "<<b<<" < "<< c<<" = "<< square(a)<<" + "<<square(b)<<" = "<< square(c)<<endl;
                 if (a+b+c==1000){
                    cout << "a b y c son triplets: "<<a<<" < "<<b<<" < "<< c<<" = "<< square(a)<<" + "<<square(b)<<" = "<< square(c)<<endl;
                 cout<< "seacabo1"<<endl;
                 break;
                 }
                 }
            
            c+=1;
            temp=0;
            }

            temp=square(a)+square(b);

           if (temp == square(c)){

                    cout << "a b y c son triplets: "<<a<<" < "<<b<<" < "<< c<<" = "<< square(a)<<" + "<<square(b)<<" = "<< square(c)<<endl;
                 if (a+b+c==1000){
                    cout << "a b y c son triplets: "<<a<<" < "<<b<<" < "<< c<<" = "<< square(a)<<" + "<<square(b)<<" = "<< square(c)<<endl;
                 cout<< "seacabo2"<<endl;
                 break;
                 }
                 }
        b+=1;
        temp=0;
        c=1;
        }
        temp=square(a)+square(b);
       if (temp == square(c)){

                    cout << "a b y c son triplets: "<<a<<" < "<<b<<" < "<< c<<" = "<< square(a)<<" + "<<square(b)<<" = "<< square(c)<<endl;
                 if (a+b+c==1000){
                    cout << "a b y c son triplets: "<<a<<" < "<<b<<" < "<< c<<" = "<< square(a)<<" + "<<square(b)<<" = "<< square(c)<<endl;
                 cout<< "seacabo3"<<endl;
                 break;
                 }
                 }
        a+=1;
        b=1;
        c=1;
        temp=0;
    }
}
