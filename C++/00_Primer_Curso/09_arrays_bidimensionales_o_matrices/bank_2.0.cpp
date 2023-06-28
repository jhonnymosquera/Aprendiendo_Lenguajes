#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

struct historial
{
    string description;
    int valor;
};

struct cuentaBancaria
{
    string usuario;
    string clave;
    vector<historial> historial;
    int saldo = 20000;
};

vector<cuentaBancaria> cuentas;
vector<historial> historialData;

int opcion;
int valor;

bool aplicacion = true;
bool sesion = false;
bool sub_menu;
bool usuario_repetido;

string usuario_ingresado;
string clave_ingresada;
int cuenta_en_sesion = 0;
int historialSize;

void titulo_aplicacion()
{
    system("cls");
    cout << "\n\tBienvenido a tu Cajero Virtual BankPolombia\n\n";
}

void mostrar_saldo()
{
    cout << "\nSaldo Actual: " << cuentas.at(cuenta_en_sesion).saldo << "\n\n";

    valor = 0;
}

int main()
{

    historialData = {{"<-- Se ha abierto la cuenta con un saldo de: ", 20000}};
    cuentas.push_back({"pepe", "pepe", historialData});

    cuentas.push_back({"pepon", "pepon", historialData});

    while (aplicacion)
    {
        titulo_aplicacion();
        cout << "Usuarios Registrados: " << cuentas.size() << "\n\n";

        cout << "1. Registrarse" << endl;
        cout << "2. Iniciar Sesion" << endl;

        cout << "\n0. Salir del cajero" << endl;

        cout << "\nOpcion: ";
        cin >> opcion;

        if (opcion > 2 || opcion < 0)
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

                    cout << "\n1. Ver Saldo" << endl;
                    cout << "2. Consignar" << endl;
                    cout << "3. Retirar" << endl;
                    cout << "4. Realizar Trasnferencia" << endl;
                    cout << "5. Historial" << endl;

                    cout << "\n0. Cerrar Sesion" << endl;

                    cout << "Opcion: ";
                    cin >> opcion;

                    switch (opcion)
                    {
                    case 1:
                        /*Ver saldo*/
                        titulo_aplicacion();
                        mostrar_saldo();

                        system("pause");
                        break;

                    case 2:
                        /*Consignar*/
                        titulo_aplicacion();
                        mostrar_saldo();

                        cout << "Valor a Consignar: ";
                        cin >> valor;

                        cuentas.at(cuenta_en_sesion).saldo += valor;
                        cuentas.at(cuenta_en_sesion).historial.push_back({"<-- Consignacion por valor de: ", valor});

                        titulo_aplicacion();
                        mostrar_saldo();

                        system("pause");

                        break;

                    case 3:
                        /*Retirar*/
                        titulo_aplicacion();
                        mostrar_saldo();

                        cout << "\nValor a Retirar: ";
                        cin >> valor;

                        if (valor > cuentas.at(cuenta_en_sesion).saldo)
                        {
                            titulo_aplicacion();
                            mostrar_saldo();

                            cout << "Saldo Insuficiente\n\n";

                            system("pause");
                            break;
                        }

                        cuentas.at(cuenta_en_sesion).saldo -= valor;
                        cuentas.at(cuenta_en_sesion).historial.push_back({"--> Retiro por valor de : ", valor});

                        titulo_aplicacion();
                        mostrar_saldo();

                        system("pause");
                        break;

                    case 4:
                        /*Transferir*/
                        if (cuentas.size() < 2)
                        {
                            titulo_aplicacion();

                            cout << "\nNo existen otros usuarios para transferir\n\n";

                            system("pause");
                            break;
                        }

                        titulo_aplicacion();
                        mostrar_saldo();

                        cout << "\nValor a Transferir: ";
                        cin >> valor;

                        if (valor <= 0)
                        {
                            break;
                        }
                        else if (valor > cuentas.at(cuenta_en_sesion).saldo)
                        {
                            titulo_aplicacion();
                            mostrar_saldo();

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
                                cuentas.at(i).historial.push_back({"<-- Trasnferencia del usuario: **" + cuentas.at(cuenta_en_sesion).usuario + "** Por valor de: ", valor});

                                /*Reduciendo el valor del saldo actual del usuario que trasnfiere y agregando el historial*/
                                cuentas.at(cuenta_en_sesion).saldo -= valor;
                                cuentas.at(cuenta_en_sesion).historial.push_back({"--> Transferencia al  usuario: **" + usuario_ingresado + "** Por valor de: ", valor});

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

                        historialData = cuentas.at(cuenta_en_sesion).historial;

                        for (size_t i = 0; i < historialData.size(); i++)
                        {
                            cout << historialData.at(i).description << historialData.at(i).valor << "\n";
                        }

                        mostrar_saldo();
                        system("pause");
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
