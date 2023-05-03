/*
    1. Escribe un programa que lea de la entrada estandar dos numeros
       y muestre en la salida suma, resta, multiplicacion, y division.
*/

#include <iostream>
using namespace std;

int main()
{
    float numero1, numero2, suma = 0, resta = 0, multiplicacion = 0, division = 0;

    cout << "Escriba un numero: ";
    cin >> numero1;

    cout << "Escriba otro numero: ";
    cin >> numero2;

    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1 * numero2;
    division = numero1 / numero2;

    cout << "\nSuma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicacion: " << multiplicacion << endl;
    cout << "Division: " << division << endl;

    system("pause");
    return 0;
}