#ifndef cuetas_bancarias
#define cuetas_bancarias
#include <iostream>
#include <conio.h>
#include <vector>

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

            return;
            system("pause");
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
    void transferencia()
    {

        this->mostrar_saldo();

        cout << "\nValor a Transferir: ";
        cin >> valor;

        if (valor <= 0)
        {
            return;
        }
        else if (valor > this->saldo)
        {
            titulo_aplicacion();
            this->mostrar_saldo();

            cout << "\nSaldo Insuficiente\n\n";

            system("pause");
            return;
        }

        cout << "Usuario Destino: ";
        cin >> usuario_ingresado;

        for (size_t i = 0; i < cuentas.size(); i++)
        {
            if (usuario_ingresado == cuentas.at(i).usuario)
            {
                titulo_aplicacion();

                cout << "\nSe han trasferido: " << valor << " al usuario: " << cuentas.at(i).usuario << "\n\n";

                /*Consignando y registrando el historial a quien se envia*/
                cuentas.at(i).saldo += valor;
                cuentas.at(i).mi_historial.push_back({"<-- Trasnferencia del usuario: **" + this->usuario + "** Por valor de: ", valor});

                /*Reduciendo el valor del saldo actual del usuario que trasnfiere y agregando el historial*/
                this->saldo -= valor;
                this->mi_historial.push_back({"--> Transferencia al  usuario: **" + usuario_ingresado + "** Por valor de: ", valor});

                valor = 0;
                system("pause");
                break;
            }
        }

        if (valor > 0)
        {
            titulo_aplicacion();

            cout << "\nEl usuario: " << usuario_ingresado << " No existe\n\n";

            usuario_ingresado = "";
            valor = 0;

            system("pause");
        }
    }

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