/*
Hacer un programa que simule un cajero con un saldo incial de 1000 Dolares
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int saldo_inicial = 0, opcion, ingresar, retirar, sub_opcion = 99;
    bool app = true, login = true, atras;

    string title_bank = "\n\tBienvenido a tu Cajero Virtual BankPolombia";
    string usuario, usuario_log, contra, contra_log;

    while (app)
    {
        cout << title_bank << endl;

        cout << "\n1. Iniciar Sesion" << endl;
        cout << "2. Registrarse" << endl;

        cout << "\n0. Salir del cajero" << endl;

        cout << "\nOpcion: ";
        cin >> opcion;

        if (opcion > 2)
        {
            opcion = 99;
        }

        atras = true;

        switch (opcion)
        {

        case 99:
            system("cls");

            while (atras)
            {
                cout << title_bank << endl;
                cout << "\nLa opcion seleccionada no exirte" << endl;
                cout << "\n0. Atras" << endl;

                cout << "\nOpcion: ";
                cin >> sub_opcion;

                if (sub_opcion == 0)
                {
                    system("cls");
                    atras = false;
                }
                else
                {
                    system("cls");
                    cout << title_bank << endl;

                    cout << "\nOpcion incorrecta..." << endl;
                }
            }

            system("cls");
            break;

        case 0:
            system("cls");
            cout << title_bank << endl;

            cout << "\nHasta Pronto.." << endl;
            app = false;
            break;

        case 1:
            system("cls");

            while (atras)
            {
                /*Iniciar Sesion*/
                cout << title_bank << endl;

                cout << "\nIngresa Usuario: ";
                cin >> usuario_log;

                cout << "Ingresa Contra: ";
                cin >> contra_log;

                if (usuario_log != usuario || contra_log != contra)
                {
                    while (atras)
                    {
                        system("cls");
                        cout << title_bank << endl;

                        cout << "\nUsuario o contra Incorrecta" << endl;

                        system("pause");

                        atras = false;
                    }
                }
                else
                {
                    /* Cajero*/
                    login = true;

                    while (login)
                    {
                        system("cls");
                        cout << title_bank << endl;

                        cout << "\n1. Ver Saldo" << endl;
                        cout << "2. Ingresar Dinero" << endl;
                        cout << "3. Retirar Dinero" << endl;

                        cout << "\n0. Cerrar Sesion" << endl;

                        cout << "\nOpcion: ";
                        cin >> opcion;

                        if (opcion > 3)
                        {
                            opcion = 99;
                        }
                    
                        atras = true;
                        switch (opcion)
                        {
                        case 99:
                            system("cls");

                            while (atras)
                            {
                                cout << title_bank << endl;

                                cout << "\nLa opcion seleccionada no exirte" << endl;
                                cout << "\n0. Atras" << endl;

                                cout << "\nOpcion: ";
                                cin >> sub_opcion;

                                if (sub_opcion == 0)
                                {
                                    system("cls");
                                    atras = false;
                                }
                                else
                                {
                                    system("cls");
                                    cout << title_bank << endl;

                                    cout << "Opcion incorrecta..." << endl;
                                }
                            }

                            system("cls");
                            break;

                        case 1:
                            system("cls");

                            while (atras)
                            {
                                cout << title_bank << endl;
                                cout << "\nSu saldo actual es: " << saldo_inicial << "\n"
                                     << endl;

                                system("pause");
                                atras = false;
                            }

                            break;

                        case 2:
                            system("cls");

                            while (atras)

                            {
                                cout << title_bank << endl;

                                cout << "\nSaldo Actual: " << saldo_inicial << endl;
                                cout << "\nValor a Ingresar: ";
                                cin >> ingresar;

                                if (ingresar <= 0)
                                {
                                    system("cls");
                                    cout << title_bank << endl;

                                    cout << "\nEl monto es incorrecto..." << endl;
                                }
                                else if (ingresar > 0)
                                {
                                    while (atras)
                                    {
                                        system("cls");
                                        cout << title_bank << endl;

                                        saldo_inicial += ingresar;
                                        cout << "\nSu nuevo saldo es: " << saldo_inicial << "\n"
                                             << endl;

                                        system("pause");
                                        atras = false;
                                    }
                                }
                            }

                            break;

                        case 3:
                            system("cls");

                            while (atras)
                            {
                                if (saldo_inicial <= 0)
                                {
                                    cout << title_bank << endl;

                                    cout << "\nEl Saldo insuficioente..."
                                         << "\n"
                                         << endl;

                                    system("pause");
                                    atras = false;
                                }
                                else
                                {
                                    while (atras)
                                    {
                                        cout << title_bank << endl;

                                        cout << "\nSaldo Actual: " << saldo_inicial << "\n"
                                             << endl;
                                        cout << "\nValor a Retirar: ";
                                        cin >> retirar;

                                        if (retirar > saldo_inicial)
                                        {
                                            while (atras)
                                            {
                                                system("cls");
                                                cout << title_bank << endl;

                                                cout << "\nSaldo insuficiente" << endl;

                                                system("pause");
                                                atras = false;
                                            }
                                        }
                                        else if (retirar == 0)
                                        {
                                            system("cls");
                                            atras = false;
                                        }
                                        else
                                        {
                                            while (atras)
                                            {
                                                system("cls");
                                                cout << title_bank << endl;

                                                saldo_inicial -= retirar;
                                                cout << "\nSu nuevo saldo es: " << saldo_inicial << "\n"
                                                     << endl;

                                                system("pause");
                                                atras = false;
                                            }
                                        }
                                    }
                                }
                            }

                            system("cls");
                            break;

                        case 0:
                            /*Cerra sesion cajero*/
                            system("cls");

                            login = false;
                            atras = false;
                            break;

                        default:
                            system("cls");
                            cout << title_bank << endl;

                            cout << "\nHa ocurrido un erro" << endl;

                            login = false;
                            break;
                        }
                    }
                }
            }

            system("cls");
            break;

        case 2:
            system("cls");

            /*Registrarse*/

            while (atras)
            {
                cout << title_bank << endl;

                cout << "\nCrea un Usuario: ";
                cin >> usuario;

                cout << "Crea una Contra: ";
                cin >> contra;

                while (atras)
                {
                    system("cls");
                    cout << title_bank << endl;

                    cout << "\nUsuario y contra creados correctamente\n"
                         << endl;

                    system("pause");
                    system("cls");
                    atras = false;
                }
            }

            system("cls");
            break;

        default:
            system("cls");
            cout << title_bank << endl;

            cout << "Ha Ocurrido Un Error" << endl;
            break;
        }
    }

    return 0;
}