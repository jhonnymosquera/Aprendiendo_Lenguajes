/**
 * Escribe un programa que defina un vector de numeros y muestre en la salida estandar el vector en orden inverso del ultimo al primer elemento
 */

#include <iostream>
using namespace std;
#include <conio.h>

int main()
{
    int numeros[10];
    int elementos;
    int res = 0;

    do
    {
        elementos = 0;
        cout << "Ingrese la cantidad de numeros a evaluar, maximo 10 numeros: ";
        cin >> elementos;

    } while (elementos > 10);

    for (int i = 0; i < elementos; i++)
    {
        cout << i + 1 << " Ingrese un numero: ";
        cin >> numeros[i];

        if (numeros[i] > res)
        {
            res = numeros[i];
        }
    }

    cout << "el numero mayor es: " << res;

    return 0;
}
