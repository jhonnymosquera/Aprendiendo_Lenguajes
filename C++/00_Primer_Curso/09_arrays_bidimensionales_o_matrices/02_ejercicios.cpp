/**
 * Hacer una matriz de tipo entera de 2 * 2, llenarla de numeros y luego copiar todo su contenido haca otra matriz
 */

#include <iostream>
using namespace std;

int main()
{
    int matriz_1[2][2] = {1, 2,
                          3, 4};

    int matriz_2[2][2];

    for (int f = 0; f < 2; f++)
    {
        for (int c = 0; c < 2; c++)
        {
            matriz_2[f][c] = matriz_1[f][c];
        }
    }

    for (int f = 0; f < 2; f++)
    {
        for (int c = 0; c < 2; c++)
        {
            cout << matriz_2[f][c] << ",";
        }

        cout << "\n";
    }

    return 0;
}