#ifndef menu_cajero_h
#define menu_cajero_h
using namespace std;

int menu_cajero()
{
    int option;

    cout << "\n1. Ver Saldo" << endl;
    cout << "2. Consignar" << endl;
    cout << "3. Retirar" << endl;
    cout << "4. Realizar Trasnferencia" << endl;
    cout << "5. Historial" << endl;
    cout << "6. Ver Otros Usuarios" << endl;

    cout << "\n0. Cerrar Sesion" << endl;

    cout << "Opcion: ";
    cin >> option;

    return option;
}

#endif