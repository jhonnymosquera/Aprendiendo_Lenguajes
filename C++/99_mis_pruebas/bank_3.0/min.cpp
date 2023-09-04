#include <iostream>
using namespace std;

int main()
{
    string nombre = "";
    string municipio = "";
    double salario = 0.0;
    int estrato = 0;
    double bonificacion = 0.0;
    string tipo_bonificacion = "";

    cout << "Digine un nombre: ";
    cin >> nombre;

    cout << "Digite Municipio: ";
    cin >> municipio;

    cout << "Digite salario: ";
    cin >> salario;

    cout << "Digite estrato: ";
    cin >> estrato;

    if (municipio == "chigorodo")
    {
        bonificacion = salario * 0.15;
        cout << "Esta persona que vive en " << municipio << " tiene un auxilio de transporte de: " << bonificacion << endl;
    }
    else if (municipio == "mutata")
    {
        bonificacion = salario * 0.20;
        cout << "Esta persona que vive en " << municipio << " tiene una bonificacion de: " << bonificacion << endl;
    }
    else if (municipio == "apartado")
    {
        bonificacion = salario * 0.08;
        cout << "Esta persona que vive en " << municipio << " tiene una bonificacion de: " << bonificacion << endl;
    }
    else if (municipio == "necocli")
    {
        bonificacion = salario * 0.25;
        cout << "Esta persona que vive en " << municipio << " tiene un auxilio turistico de: " << bonificacion << endl;
    }
    else
    {
        bonificacion = salario * 0.05;
        cout << nombre << " que vive en " << municipio << " tiene una bonificacion general de: " << bonificacion;
    }

    return 0;
}