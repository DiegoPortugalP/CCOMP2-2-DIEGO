#include <iostream>
using namespace std;


void cuboPorRefconPtrs(int* ptr){

    *ptr=*ptr**ptr**ptr;

}

void intercambio(int *a, int*b){

    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){

    int y = 4;

    cuboPorRefconPtrs(&y);
    cout<<y<<endl;

    int x=20;
    int z=40;

    intercambio(&x,&z);

    cout <<"x : "<< x <<endl; //40
    cout <<"z : "<< z <<endl; //20

    return 0;
}
