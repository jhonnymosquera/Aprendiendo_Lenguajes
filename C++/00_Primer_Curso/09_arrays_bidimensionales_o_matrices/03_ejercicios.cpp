/*

|1 2 3|         |1 4 7|
|4 5 6|  -->    |2 5 8|
|7 8 9|         |3 6 9|

*/

#include <iostream>
using namespace std;

int main()
{
    int numeros[3][3] = {1, 2, 3,
                         4, 5, 6,
                         7, 8, 9};

    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << numeros[c][f];
        }

        cout << "\n";
    }

    return 0;
}