/* Escibir un codigo que intercambie los valores entre 2 variables */

#include <iostream>
using namespace std;

int main()
{
    int x, y, aux;

    cout << "Digite numero X: ";
    cin >> x;

    cout << "Digite numero y: ";
    cin >> y;

    aux = x;
    x = y;
    y = aux;

    cout << "\nNuevo Valor de x: " << x << endl;
    cout << "Nuevo valor de y: " << y << endl;
    return 0;
}