/**
 * Realiza un programa que defina dos vectores de caracteres
 * despues almacene el contenido de ambos vectores en u nuveo vector
 * situando en primer lugar los elementos del primer vector
 * seguido por los elementos del segundo vector
 * muestre el contenido del nuevo vector
 */

#include <iostream>
using namespace std;
#include <conio.h>

int main()
{
    char letras_1[] = {'1', '2', '3', '4', '5'};
    char letras_2[] = {'6', '7', '8', '9'};

    const int elementos_letras_1 = sizeof(letras_1) / sizeof(letras_1[0]);
    const int elementos_letras_2 = sizeof(letras_2) / sizeof(letras_2[0]);
    int elementos_totales = elementos_letras_1 + elementos_letras_2;

    char letras_3[elementos_totales];

    for (int i = 0; i < elementos_letras_1; i++)
    {

        letras_3[i] = letras_1[i];
    }

    for (int i = 0; i < elementos_letras_2 + 1; i++)
    {
        letras_3[elementos_letras_1 + i] = letras_2[i];
    }

    for (int i = 0; i < elementos_totales; i++)
    {
        cout << "--> " << letras_3[i] << endl;
    }

    return 0;
}
