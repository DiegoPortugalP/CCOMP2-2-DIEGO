#include <iostream>
using namespace std;

 int main(){

    int y = 20;
    
    int *yPtr;
    yPtr = &y;

    cout << yPtr <<endl;

    int x = 100;

    yPtr = &x;

    cout << yPtr <<endl;

    cout << *yPtr <<endl;

    *yPtr = 500;

    cout << x <<endl;



    
    return 0;    
 }