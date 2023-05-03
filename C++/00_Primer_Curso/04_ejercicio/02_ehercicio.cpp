/*
Escribe un programa que lea de la entrada estantar el precio de un producto
y muestre en la salida estandar el precio del producto al aplicarle iva (19%)
*/

#include <iostream>
using namespace std;

int main()
{
    int precioDelProducto, precioDelProductoConIva;
    float iva = 1.19;

    cout << "Precio del producto: ";
    cin >> precioDelProducto;

    precioDelProductoConIva = precioDelProducto * iva;

    cout << "\nPrecio del producto + iva: " << precioDelProductoConIva << endl;

    system("pause");
    return 0;
}