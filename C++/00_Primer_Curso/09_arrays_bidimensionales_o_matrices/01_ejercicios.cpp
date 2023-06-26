/**
 * Hacer un programa para rellenar una matriz
 * pidiendo al usuario el numero de filas y columnas
 * mostras la matriz en pantañña
 */

#include <iostream>
using namespace std;

int main()
{
    int filas, columnas;

    cout << "Ingrece la cantidad de filas: ";
    cin >> filas;

    cout << "Ingrece la cantidad de columnas: ";
    cin >> columnas;

    int matriz[filas][columnas];

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Digite un numero fila " << i << " Columna " << j << " : ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz[i][j] << ",";
        }
        cout << "\n";
    }

    return 0;
}