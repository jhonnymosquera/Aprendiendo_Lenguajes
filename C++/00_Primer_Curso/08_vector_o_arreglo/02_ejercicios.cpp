/**
 * Escribe un programa que defina un vector de numeros y calcule la multiplicacion acumulada de sus elementos
 */

#include <iostream>
using namespace std;

int main()
{
    int numeros[] = {3, 5, 6, 10, 10, 10};
    int multiplicacion = 0;
    int elemetos = 0;

    elemetos = sizeof(numeros) / sizeof(numeros[0]);

    for (int i = 0; i < elemetos; i++)
    {
        if (multiplicacion == 0)
        {
            multiplicacion += numeros[i];
        }
        else
        {
            multiplicacion *= numeros[i];
        }
    }

    cout << "El resultado de la multiplicacion acumulada es: " << multiplicacion << endl;

    return 0;
}