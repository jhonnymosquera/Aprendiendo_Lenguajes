// escribir un programa que pida 3 numeros y determine cual es el mayor

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;

    cout << "Digite 3 numeros: ";
    cin >> n1 >> n2 >> n3;

    if (n1 == n2 && n1 == n3)
    {
        cout << "Todos los los numeros son iguales" << endl;
    }
    else if (n1 > n2 && n1 > n3)
    {
        cout << "El numero mayor es: " << n1 << endl;
    }
    else if (n2 > n1 && n2 > n3)
    {
        cout << "El numero mayor es: " << n2 << endl;
    }
    else
    {
        cout << "El numero mayor es: " << n3 << endl;
    }

    return 0;
}