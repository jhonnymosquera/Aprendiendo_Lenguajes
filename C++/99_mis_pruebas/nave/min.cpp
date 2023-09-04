#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int suma = 0;

    for (int i = 0; i < 10; i++)
    {
        suma += i;

        cout << "suma =  " << suma << endl;

        Sleep(1000);
    }

    return 0;
}