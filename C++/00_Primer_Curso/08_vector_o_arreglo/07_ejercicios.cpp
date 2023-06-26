/**
 * Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo multiplicados por 2
 * myestre el segundo arreglo
 */

#include <iostream>
using namespace std;

int main()
{
    int numeros[] = {1, 2, 3, 4, 5, 6};
    int elementos = sizeof(numeros) / sizeof(numeros[0]);
    int multiplicados[elementos];

    for (int i = 0; i < elementos; i++)
    {
        multiplicados[i] = numeros[i] * 2;
        cout << "--> " << multiplicados[i] << endl;
    }

    return 0;
}