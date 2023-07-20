#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

void posicion__del_cursor_en_consola(int x, int y)
{

    // Tomamos el control de salida de la consola
    HANDLE salida_consola = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coordenadas;
    coordenadas.X = x;
    coordenadas.Y = y;

    /** setConsoleCursorPosition
     * recibe 2 parametros
     * 1 - entrada o salidad de la consola
     * 2 - la posicion en la consola
     */
    SetConsoleCursorPosition(salida_consola, coordenadas);
}

int main()
{
    posicion__del_cursor_en_consola(5,5);
    printf("5,5"); 

    return 0;
}