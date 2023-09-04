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

    int index_clave = 1;
    int saldo = 2;

public:
    bool verificar_usuario_repetido(string usuario)
    {
        bool repetido = false;

        ifstream archivo("../cuentas/" + usuario + ".txt");

        if (!archivo.fail())
        {
            titulo_aplicacion();

            cout << "\nEl usuario esta repetido, ingrese otro usuario \n\n";

            repetido = true;
            system("pause");
        }

        return repetido;
    }

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

    bool iniciar_sesion(string usuario, string clave)
    {
        sesion = false;

        ifstream archivo("../cuentas/" + usuario + ".txt");

        if (archivo.fail())
        {
            return sesion;
        }

        string clave_de_cuenta;
        int contador = 0;

        while (!archivo.eof())
        {

            getline(archivo, clave_de_cuenta);

            contador++;
            if (contador != this->index_clave)
            {
                continue;
            }
            break;
        }

        if (clave != clave_de_cuenta)
        {
            return sesion;
        }
        else
        {
            sesion = true;
        }

        return sesion;
    }

    void ver_saldo();
    void ingresar_saldo();
    void retirar_saldo();
    void transferir_saldo();
};

#endif