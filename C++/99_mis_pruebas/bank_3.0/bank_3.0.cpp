#include <iostream>
#include <conio.h>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

#include "variables_globales.h"
#include "cuentas_bancarias.h"
#include "menu_cajero.h"
#include "objeto_cuentas_bancarias.h"

int main()
{
    cuentas_bancarias cuentas_bancarias;

    while (aplicacion)
    {
        titulo_aplicacion();

        cout << "1. Registrarse" << endl;
        cout << "2. Iniciar Sesion" << endl;

        cout << "\n0. Salir del cajero" << endl;

        cout << "\nOpcion: ";
        cin >> opcion;

        sub_menu = true;

        switch (opcion)
        {
        case 1:
            /*Registrarce*/
            do
            {
                do
                {
                    system("cls");

                    titulo_aplicacion();

                    cout << "\nRegistro" << endl;

                    cout << "\nIngrese un nombre de usuario: ";
                    cin >> usuario_ingresado;

                } while (cuentas_bancarias.verificar_usuario_repetido(usuario_ingresado));

                cout << "Ingrese una clave: ";
                cin >> clave_ingresada;

                cuentas_bancarias.crear_cuenta({usuario_ingresado, clave_ingresada, 0, {"saldo inicial --> ", 0}});

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

            /*Menu De inicio de sesion*/
            while (sub_menu)
            {
                titulo_aplicacion();

                cout << "\nIniciar Sesion" << endl;

                cout << "Usuario: ";
                cin >> usuario_ingresado;

                cout << "Clave  : ";
                cin >> clave_ingresada;

                sesion = cuentas_bancarias.iniciar_sesion(usuario_ingresado, clave_ingresada);

                if (!sesion)
                {
                    titulo_aplicacion();

                    cout << "\nUsuario o Clave incorrectos\n\n";

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

                        system("pause");
                        break;

                    case 2:
                        /*Consignar*/
                        titulo_aplicacion();

                        break;

                    case 3:
                        /*Retirar*/
                        titulo_aplicacion();

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

        case 0:
            titulo_aplicacion();

            cout << "\nHasta Pronto" << endl;

            aplicacion = false;

            break;

        default:
            titulo_aplicacion();

            cout << "\nOpcion incorrecta" << endl;

            system("pause");
            break;
        }
    }

    return 0;
}
