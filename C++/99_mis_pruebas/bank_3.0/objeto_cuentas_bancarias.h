#ifndef cuentas_bancarias_h
#define cuentas_bancarias_h

struct historial2
{
    string description = "se ha abierto una cuenta con saldo de: ";
    int valor = 0;
} historial2;

struct cuentaBancaria2
{
    string usuario;
    string clave;
    int saldo = 0;
    historial historial2;
};

class cuentas_bancarias
{

    string cuenta_en_sesion;

    int clave = 1;
    int saldo = 2;

public:
    void crear_cuenta(cuentaBancaria2 datos)
    {
        ofstream archivo("../cuentas/" + datos.usuario + ".txt");
        if (archivo.fail())
        {
            cout << "cree una carpeta con el nombre: \"cuentas\" \n\n";
            exit(1);
        }

        archivo << datos.usuario << endl;
        archivo << datos.clave << endl;
        archivo << datos.saldo << endl;
        archivo << "Historial" << endl;
        archivo << datos.historial2.description << datos.historial2.valor << endl;

        archivo.close();
    }

    void iniciar_sesion(string usuario, string clave)
    {
        ifstream archivo("../cuentas/" + usuario + ".txt");

        if (archivo.fail())
        {
            cout << "cuenta o contraseña incorrecta\n\n";
            exit(1);
        }

        string dato;
        int contador;
        while (!archivo.eof())
        {
            if (contador != this->clave)
            {
                continue;
            }

            getline(archivo, dato);
        }
    }
    void ver_saldo();
    void ingresar_saldo();
    void retirar_saldo();
    void transferir_saldo();
};

#endif