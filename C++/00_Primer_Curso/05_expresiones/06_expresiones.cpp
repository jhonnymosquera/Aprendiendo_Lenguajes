// Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos

#include <iostream>
using namespace std;

int main()
{
    float almuno1 = 10, almuno2 = 5, almuno3 = 5, almuno4 = 5, promedio = 0;

    promedio = (almuno1 + almuno2 + almuno3 + almuno4) / 4;

    cout << "Nota promedio es: " << promedio << endl;

    return 0;
}