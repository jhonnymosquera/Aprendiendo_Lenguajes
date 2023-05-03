// Tipos de datos basicos de C++

#include <iostream>

using namespace std;

int main()
{
    int entero = 15;         // int para numnero entero
    float flotante = 10.45;  // float para numero flotante
    double mayor = 10.35654; // para flotantes con decimales mas largos
    char una_letra = 'a';    // char para una letra
    char una_letra[5];       // char data[numero] para determinar cuantas letrar oueden entrar
    string letras = "12321"; // string para cadenas de texto

    cout << entero << endl; // cout es parecido al console.log(entero)
    cout << flotante << endl;
    cout << mayor << endl;
    cout << una_letra << endl;
    cout << letras << endl;

    return 0;
}