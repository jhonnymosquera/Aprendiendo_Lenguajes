// Sentencia switch

#include <iostream>
using namespace std;

int main()
{

    int numero;

    cout << "Digite un numero: ";
    cin >> numero;

    switch (numero)
    {
    case 1:
        cout << "Es igual a numero 1" << endl;
        break;

    case 2:
        cout << "Es igual a numero 2" << endl;
        break;

    case 3:
        cout << "Es igual a numero 3" << endl;
        break;

    case 4:
        cout << "Es igual a numero 4" << endl;
        break;

    default:
        cout << "Es mayor a 4" << endl;

        break;
    }

    return 0;
}