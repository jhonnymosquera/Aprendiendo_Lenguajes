
#include <iostream>
#include <math.h> // Liberia matematica
using namespace std;

int main()
{
    float x, y, resultado = 0;

    cout << "Digite el valor de x: ";
    cin >> x;

    cout << "Digite el valor de y: ";
    cin >> y;

    // sqrt() para la raiz cuadrada
    // pow
    resultado = (sqrt(x)) / (pow(y, 2) - 1);

    cout << "\nResultado: " << resultado << endl;

    return 0;
}