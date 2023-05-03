#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Ingrese un numero: ";
    cin >> n;

    for (i = 0; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}