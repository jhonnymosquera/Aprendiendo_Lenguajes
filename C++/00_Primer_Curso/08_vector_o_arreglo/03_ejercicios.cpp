/**
 * Escribe un programa que lea de la entrada estandar un vector de numeros y muestre en la salida estandar los numeros del vector con sus indices asiciados
 */

#include <iostream>
using namespace std;
#include <conio.h>

int main()
{

    int numeros[100];
    int numeo_de_elementos;
    int length(int vector[]);

    cout << "Numero de elementos que va a tener el arreglo: ";
    cin >> numeo_de_elementos;

    for (int i = 0; i < numeo_de_elementos; i++)
    {
        cout << "Digite el numero de la posicion: ";
        cin >> numeros[i];
    }

    for (int i = 0; i < numeo_de_elementos; i++)
    {
        cout << numeros[i] << " ---> " << i << endl;
    }

    return 0;
}
