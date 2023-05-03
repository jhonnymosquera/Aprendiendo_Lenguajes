/*
Escribe un programa que lea de la entrada estandar tres numeros.
Despues debe leer un cuarto numero e indicar si el numero coincide con alguno de los introducidos con anterioridad.
*/

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4;

    while (1)
    {
        cout << "Digite 3 numeros: ";
        cin >> n1 >> n2 >> n3;

        cout << "Digite un cuarto numero: ";
        cin >> n4;

        if (n4 == n1 || n4 == n2 || n4 == n3)
        {
            cout << "Coincidencia encontrada" << endl;
        }
        else
        {
            cout << "No se encontraron coincidencias" << endl;
        }
    }

    return 0;
}