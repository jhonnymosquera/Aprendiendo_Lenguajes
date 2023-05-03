// semtemcoa if

#include <iostream>
using namespace std;

// == es igual a
// != diferente de
// > mayor que
// >= mayor o igual
// < menor que
// <= menor o igual

int main()
{
    int numero, dato = 5;

    cout << "Digite un numero: ";
    cin >> numero;

    if (numero > 5)
    {
        cout << "\nEl numero es mayor a: " << dato << endl;
    }
    else if (numero == 5)
    {
        cout << "\nEl numero es igual a: " << dato << endl;
    }
    else
    {
        cout << "\nEl numero es menor a: " << dato << endl;
    }

    return 0;
}