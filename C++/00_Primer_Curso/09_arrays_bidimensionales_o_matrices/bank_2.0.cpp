#include <iostream>
#include <conio.h>
using namespace std;

struct cuentaBancaria
{
    string usuario;
    string clave;
    int saldo = 0;
} cuenta[10];

int cuentas_actuales_registradas = 0;
int opcion;
int valor;

bool aplicacion = true;
bool sesion = false;
bool sub_menu;
bool usuario_repetido;

string usuario_ingresado;
string clave_ingresada;
int numero_de_cuenta = 0;

void titulo_aplicacion()
{
    system("cls");
    cout << "\n\tBienvenido a tu Cajero Virtual BankPolombia\n\n";
}

void mostrar_saldo()
{
    cout << "\nSaldo Actual: " << cuenta[numero_de_cuenta].saldo << "\n\n";

    valor = 0;
}

int main()
{
    while (aplicacion)
    {
        titulo_aplicacion();
        cout << cuentas_actuales_registradas << " de 10 cuentas\n\n";

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

                    if (cuentas_actuales_registradas != 0)
                    {
                        for (int i = 0; i < cuentas_actuales_registradas; i++)
                        {
                            if (cuenta[i].usuario == usuario_ingresado)
                            {
                                titulo_aplicacion();

                                cout << "\nEl nombre de usuario ya existe" << endl;

                                usuario_repetido = true;
                                system("pause");
                            }
                        }
                    }
                } while (usuario_repetido);

                cuenta[cuentas_actuales_registradas].usuario = usuario_ingresado;

                cout << "Ingrese una clave: ";
                cin >> cuenta[cuentas_actuales_registradas].clave;

                titulo_aplicacion();

                cout << "\nUsuario y clave creados correctamente\n\n";

                cuentas_actuales_registradas++;
                sub_menu = false;
                usuario_ingresado = "";
                system("pause");

            } while (sub_menu);

            break;

        case 2:
            /*Iniciar sesion*/

            if (cuentas_actuales_registradas == 0)
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

                for (int i = 0; i < cuentas_actuales_registradas; i++)
                {
                    if (usuario_ingresado == cuenta[i].usuario)
                    {
                        numero_de_cuenta = i;

                        if (clave_ingresada == cuenta[numero_de_cuenta].clave)
                        {
                            sesion = true;
                        }
                    }
                }

                if (sesion == false)
                {
                    titulo_aplicacion();

                    cout << "\nUsuario o Clave incorrectos" << endl;

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

                        cout << "\nValor a Consignar: ";
                        cin >> valor;

                        cuenta[numero_de_cuenta].saldo += valor;

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

                        if (valor > cuenta[numero_de_cuenta].saldo)
                        {
                            titulo_aplicacion();
                            mostrar_saldo();

                            cout << "Saldo Insuficiente\n\n";

                            system("pause");
                            break;
                        }

                        cuenta[numero_de_cuenta].saldo -= valor;

                        titulo_aplicacion();
                        mostrar_saldo();

                        system("pause");
                        break;

                    case 4:
                        /*Transferir*/
                        if (cuentas_actuales_registradas < 2)
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

                        if (valor > cuenta[numero_de_cuenta].saldo)
                        {
                            titulo_aplicacion();
                            mostrar_saldo();

                            cout << "\nSaldo Insuficiente\n\n";

                            system("pause");
                            break;
                        }

                        cout << "Usuario Destino: ";
                        cin >> usuario_ingresado;

                        for (int i = 0; i < cuentas_actuales_registradas; i++)
                        {
                            if (usuario_ingresado == cuenta[i].usuario)
                            {
                                titulo_aplicacion();

                                cout << "\n Se han trasferido: " << valor << " De manera correcta al usuario: " << cuenta[i].usuario << "\n\n";

                                cuenta[i].saldo += valor;
                                cuenta[numero_de_cuenta].saldo -= valor;

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

                            system("pause");
                        }

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
