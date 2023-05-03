/*
 Realice un programa que lea de la entrada estandar los siguientes datos de una persona:

    Edad: dato tipo entero.
    Sexo: dato topo caracter.
    Altura en metros: dato de tipo real.

    Tras leer los datos, El programa debe mostrarlos en la salida estandar
*/

#include <iostream>
using namespace std;

int main()
{
    int edad;
    string sexo;
    float altura;

    cout << "Digite su Edad: ";
    cin >> edad;

    cout << "Digite su Sexo: ";
    cin >> sexo;

    cout << "Digite su altura en metros: ";
    cin >> altura;

    cout << "\nSu edad es: " << edad << endl;
    cout << "Su sexo es: " << sexo << endl;
    cout << "Su altura es: " << altura << endl;

    return 0;
}