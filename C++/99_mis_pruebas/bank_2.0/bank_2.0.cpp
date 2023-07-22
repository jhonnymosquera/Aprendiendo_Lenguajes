#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

#include "variables_globales.h"
#include "cuentas_bancarias.h"
#include "menu_cajero.h"

int main()
{

    historialData = {{"Se ha abierto la cuenta con un saldo de: ", 20000}};
    cuentas.push_back({"pepe", "pepe", historialData, 20000});
    cuentas.push_back({"pepon", "pepon", historialData, 20000});

    while (aplicacion)
    {
        titulo_aplicacion();
        cout << "Usuarios Registrados: " << cuentas.size() << "\n\n";

        cout << "1. Registrarse" << endl;
        cout << "2. Iniciar Sesion" << endl;

        cout << "\n0. Salir del cajero" << endl;

        cout << "\nOpcion: ";
        cin >> opcion;

        if (opcion > 2 or opcion < 0)
        {
            opcion = 99;
        }

        sub_menu = true;

        switch (opcion)
        {
        case 1:
            /*Registrarce*/
            do
            {
                do
                {
                    usuario_repetido = false;

                    titulo_aplicacion();

                    cout << "\nRegistro" << endl;

                    cout << "\nIngrese un nombre de usuario: ";
                    cin >> usuario_ingresado;

                    if (cuentas.size() != 0)
                    {
                        for (size_t i = 0; i < cuentas.size(); i++)
                        {
                            if (cuentas.at(i).usuario == usuario_ingresado)
                            {
                                titulo_aplicacion();

                                cout << "\nEl nombre de usuario ya existe" << endl;

                                usuario_repetido = true;
                                system("pause");
                                break;
                            }
                        }
                    }
                } while (usuario_repetido);

                cout << "Ingrese una clave: ";
                cin >> clave_ingresada;

                historialData = {{"Se ha abierto la cuenta con un saldo de: ", 0}};
                cuentas.push_back({usuario_ingresado, clave_ingresada, historialData});
                titulo_aplicacion();

                cout << "\nUsuario y clave creados correctamente\n\n";

                sub_menu = false;
                usuario_ingresado = "";
                clave_ingresada = "";
                system("pause");

            } while (sub_menu);

            break;

        case 2:
            /*Iniciar sesion*/

            if (cuentas.size() == 0)
            {
                titulo_aplicacion();

                cout << "\nNo existen cuentas registradas\n"
                     << endl;

                system("pause");
                break;
            }

            /*Menu De inicio de sesion*/
            while (sub_menu)
            {
                titulo_aplicacion();

                cout << "\nIniciar Sesion" << endl;

                cout << "Usuario: ";
                cin >> usuario_ingresado;

                cout << "Clave  : ";
                cin >> clave_ingresada;

                for (size_t i = 0; i < cuentas.size(); i++)
                {
                    if (usuario_ingresado == cuentas.at(i).usuario)
                    {
                        cuenta_en_sesion = i;

                        if (clave_ingresada == cuentas.at(cuenta_en_sesion).clave)
                        {
                            sesion = true;
                            break;
                        }
                        break;
                    }
                }

                if (sesion == false)
                {
                    titulo_aplicacion();

                    cout << "\nUsuario o Clave incorrectos" << endl;

                    sub_menu = false;
                    system("pause");
                }

                /*Sesion iniciada*/
                while (sesion)
                {
                    /*Menu del cajero*/
                    titulo_aplicacion();

                    opcion = menu_cajero();

                    switch (opcion)
                    {
                    case 1:
                        /*Ver saldo*/
                        titulo_aplicacion();

                        cuentas.at(cuenta_en_sesion).mostrar_saldo();

                        system("pause");
                        break;

                    case 2:
                        /*Consignar*/
                        titulo_aplicacion();

                        cuentas.at(cuenta_en_sesion).consignar();

                        break;

                    case 3:
                        /*Retirar*/
                        titulo_aplicacion();

                        cuentas.at(cuenta_en_sesion).retirar();

                        break;

                    case 4:
                        /*Transferir*/
                        titulo_aplicacion();

                        if (cuentas.size() < 2)
                        {

                            cout << "\nNo existen otros usuarios para transferir\n\n";

                            system("pause");
                            break;
                        }

                        cuentas.at(cuenta_en_sesion).mostrar_saldo();

                        cout << "\nValor a Transferir: ";
                        cin >> valor;

                        if (valor <= 0)
                        {
                            break;
                        }
                        else if (valor > cuentas.at(cuenta_en_sesion).saldo)
                        {
                            titulo_aplicacion();
                            cuentas.at(cuenta_en_sesion).mostrar_saldo();

                            cout << "\nSaldo Insuficiente\n\n";

                            system("pause");
                            break;
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
                                cuentas.at(i).mi_historial.push_back({"<-- Trasnferencia del usuario: **" + cuentas.at(cuenta_en_sesion).usuario + "** Por valor de: ", valor});

                                /*Reduciendo el valor del saldo actual del usuario que trasnfiere y agregando el historial*/
                                cuentas.at(cuenta_en_sesion).saldo -= valor;
                                cuentas.at(cuenta_en_sesion).mi_historial.push_back({"--> Transferencia al  usuario: **" + usuario_ingresado + "** Por valor de: ", valor});

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

                        break;

                    case 5:
                        /*Historial*/
                        titulo_aplicacion();

                        cuentas.at(cuenta_en_sesion).ver_historial();
                        break;

                    case 6:

                        cuentas.at(cuenta_en_sesion).ver_usuarios(cuentas);

                        break;

                    case 0:
                        sesion = false;
                        sub_menu = false;

                        break;

                    default:
                        break;
                    }
                }
            }

            break;

        case 99:
            titulo_aplicacion();

            cout << "\nOpcion incorrecta" << endl;

            system("pause");
            break;

        case 0:
            titulo_aplicacion();

            cout << "\nHasta Pronto" << endl;

            aplicacion = false;

            break;

        default:
            break;
        }
    }

    return 0;
}
