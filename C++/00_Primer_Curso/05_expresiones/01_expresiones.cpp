// 1. Escribe la siguiente expresion a + 1 (a sobre b + 1) como expresion en C++
//                                   b

#include <iostream>
using namespace std;

int main()
{
    float a, b, resultado = 0;

    cout << "Digite el valor de a: ";
    cin >> a;

    cout << "Digite el valor de b: ";
    cin >> b;

    resultado = (a / b) + 1;

    cout.precision(4); // presicion funciona para redondea y elegir la cantidad maxima de numeros que apareceran
    cout << "\nResultado: " << resultado;

    return 0;
}