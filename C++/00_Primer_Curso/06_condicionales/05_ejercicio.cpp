// Escribir un programa que lea de la entrada estandar un caracter e indique
// en la salida estandar si el caracter es una vocal minuscula o no

#include <iostream>
using namespace std;

int main()
{
    char letra;
    string minuscula = "Es una vocal minuscula";

    while (1)
    {
        cout << "Escriba una vocal minuscula: ";
        cin >> letra;

        switch (letra)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << minuscula << endl;
            break;

        default:
            cout << "No es una vocal minuscula" << endl;

            break;
        }
    }

    return 0;
}