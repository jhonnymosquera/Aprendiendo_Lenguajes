#include <iostream>
#include <cstdlib>

using namespace std;

int casa[5][5];

void setColor(int valor)
{
    if (valor != 0)
    {
        cout << "\e[0;35m";
    }
    else
    {
        cout << "\033[0m";
    }
}

int main()
{
    int n = 5; // tamaño

    // llenamos la casa
    for (int p = 0; p < n; p++)
    {
        for (int h = 0; h < n; h++)
        {
            if (h == 0 || p == 0 && h == 1 || p == 0 && h == 2 || p == 0 && h == 3 || p == 1 && h == 3 || p == 2 && h == 1 || p == 2 && h == 2 || p == 3 && h == 3 || p == 4 && h == 1 || p == 4 && h == 2 || p == 4 && h == 3)
            {

                casa[p][h] = 1;
            }
        }
    }

    for (int p = 0; p < n; p++)
    {
        for (int h = 0; h < n; h++)
        {
            setColor(casa[p][h]);
            cout << "" << casa[p][h];
        }
        cout << "\033[0m\n";
    }

    return 0;
}