// Realice un programa qe lea un valor entero y determine si se trata de un numero par o impar

#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        int num = 0;

        cout << "Digite un numero: ";
        cin >> num;

        if (num == 0)
        {
            cout << "El numero es cero" << endl;
        }
        else if (num % 2 == 0)
        {
            cout << "El numero es par" << endl;
        }
        else
        {
            cout << "El numero es impar" << endl;
        }
    }

    return 0;
}