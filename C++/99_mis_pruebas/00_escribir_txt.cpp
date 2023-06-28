#include <iostream>
#include <fstream>

using namespace std;

void escribir();

int main()
{

    escribir();

    // ofstream archivo("datos.txt"); // Abre el archivo en modo de escritura

    // if (archivo.is_open())
    // {
    //     archivo << "Hola, este es un ejemplo de registro de datos en un archivo de texto.\n";
    //     archivo << "Puedes escribir cualquier contenido adicional aquí.\n";

    //     archivo.close();
    //     cout << "Datos registrados correctamente en el archivo." << endl;
    // }
    // else
    // {
    //     cout << "No se pudo abrir el archivo." << endl;
    // }

    return 0;
}

void escribir()
{
    ofstream archivo_txt("../prueba.txt");

    archivo_txt.is_open(); // Abriendo el archivo

    if (archivo_txt.fail())
    {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }

    for (size_t i = 0; i < 10; i++)
    {
        archivo_txt << "Hola que tal mi nombre es jhonny\n";
    }

    archivo_txt.close();
}