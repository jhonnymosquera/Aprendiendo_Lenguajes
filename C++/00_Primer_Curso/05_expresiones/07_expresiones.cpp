/*
La calificaicon final de un estudiante es la media ponderada de tres notas:
La nota de practicas que cuenta con un 30% del total.
La nota teorica que cuenta un 60%.
La tota de participacion que cuenta cel 10% restante.

Escriba un programa que lea de la entrada estandar las tres notas de un alumno y escriba en la salidaestandar su nota final
*/

#include <iostream>
using namespace std;

int main()
{
    float practicas, teorica, participacion, notaFinal = 0;

    cout << "Nota de practicas: ";
    cin >> practicas;

    cout << "Nota de teorica: ";
    cin >> teorica;

    cout << "Nota de participacion: ";
    cin >> participacion;

    notaFinal = (practicas * 0.3) + (teorica * 0.6) + (participacion * 0.1);

    cout << "\nNota final: " << notaFinal << endl;

    return 0;
}