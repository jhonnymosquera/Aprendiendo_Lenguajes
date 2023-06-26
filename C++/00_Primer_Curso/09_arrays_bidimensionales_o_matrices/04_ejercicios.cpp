/*

sumar 2 matrices

*/

#include <iostream>
using namespace std;

int main()
{
    int matriz1[3][3] = {1, 2, 3,
                         4, 5, 6,
                         7, 8, 9};

    int matriz2[3][3] = {1, 2, 3,
                         4, 5, 6,
                         7, 8, 9};

    int matriz3[3][3];

    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            matriz3[f][c] = matriz1[f][c] + matriz2[f][c];
        }
    }

    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << matriz3[f][c] << ",";
        }

        cout << "\n";
    }

    return 0;
}