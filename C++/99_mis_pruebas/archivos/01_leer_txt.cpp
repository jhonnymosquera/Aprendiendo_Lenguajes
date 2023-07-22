#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;

void lectura()
{
    ifstream archivo("../prueba.txt");
    string texto;

    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo\n";

        exit(1);
    }

    while (!archivo.eof())
    {
        getline(archivo, texto);
        cout << texto << "\n";
    }

    archivo.close();
}

int main()
{
    lectura();

    return 0;
}
