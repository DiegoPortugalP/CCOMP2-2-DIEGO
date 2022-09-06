#include <iostream>

using namespace std;

int main()
{
char caracter;

    cout << "Ingrese un caracter:" << endl;
    cin >> caracter;

    cout << static_cast<int>(caracter);

    return 0;
}
