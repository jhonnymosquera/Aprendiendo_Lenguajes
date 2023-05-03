/**
 * Escribe un programa que defiva un vector de numero
 * calcule la suma de sus elementos
 */

#include <iostream>
using namespace std;

int main()
{
    int numeros[] = {1, 2, 3, 4, 5}, suma = 0, elementos;
    elementos = sizeof(numeros) / sizeof(int);

    for (int i = 0; i < elementos; i++)
    {
        suma += numeros[i];
    }

    cout << "La suma de los elementos es: " << suma << endl;

    return 0;
}