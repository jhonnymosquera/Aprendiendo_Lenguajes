#ifndef cuetas_bancarias
#define cuetas_bancarias
#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

string usuario_ingresado;
string clave_ingresada;
int valor;

void titulo_aplicacion()
{
    system("cls");
    cout << "\n\tBienvenido a tu Cajero Virtual BankPolombia\n\n";
};

struct historial
{
    string description;
    int valor;
};

struct cuentaBancaria
{
    string usuario;
    string clave;
    vector<historial> mi_historial;
    int saldo = 0;

    /*Ver Saldo*/
    void mostrar_saldo()
    {
        cout << "\nSaldo Actual: " << this->saldo << "\n\n";
    }

    /*Consignar*/
    void consignar()
    {
        this->mostrar_saldo();

        cout << "Valor a Consignar: ";
        cin >> valor;

        if (valor < 1)
        {
            titulo_aplicacion();
            cout << " La cantidad a consignar no es valida\n\n";

            system("pause");
            return;
        }

        this->saldo += valor;
        this->mi_historial.push_back({"<-- Consignacion por valor de: ", valor});

        titulo_aplicacion();
        this->mostrar_saldo();

        system("pause");
    };

    /*Retirar*/
    void retirar()
    {
        this->mostrar_saldo();

        cout << "\nValor a Retirar: ";
        cin >> valor;

        if (valor > this->saldo)
        {
            titulo_aplicacion();
            this->mostrar_saldo();

            cout << "Saldo Insuficiente\n\n";
            system("pause");
            return;
        }

        this->saldo -= valor;
        this->mi_historial.push_back({"--> Retiro por valor de : ", valor});

        titulo_aplicacion();
        mostrar_saldo();

        cout << "Retiro exitoso\n\n";

        system("pause");
    };

    /*Transferir*/

    /*Historial*/
    void ver_historial()
    {

        for (size_t i = 0; i < this->mi_historial.size(); i++)
        {
            cout << this->mi_historial.at(i).description << this->mi_historial.at(i).valor << "\n";
        }

        this->mostrar_saldo();
        system("pause");
    }
};

vector<historial> historialData;
vector<cuentaBancaria> cuentas;

#endif