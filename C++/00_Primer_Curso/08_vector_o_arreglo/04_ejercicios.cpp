/**
 * Escribe un programa que defina un vector de numeros y muestre en la salida estandar el vector en orden inverso del ultimo al primer elemento
 */

#include <iostream>
using namespace std;
#include <conio.h>

int main()
{
    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, elementos = 0;
    elementos = (sizeof(numeros) / sizeof(numeros[0])) - 1;

    for (int i = elementos; i >= 0; i--)
    {
        cout << numeros[i] << endl;
    }

    return 0;
}
