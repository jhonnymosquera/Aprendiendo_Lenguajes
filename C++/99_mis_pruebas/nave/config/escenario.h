#ifndef escenario_h
#define escenario_h

#include <iostream>
#include <windows.h>
using namespace std;

int console_width = Console_width();
int console_height = Console_height();

void pintar_scenario()
{
    if (GetConsoleScreenBufferInfo(consoleHandle, &csbi))
    {
        int console_width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
        int console_height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

        int width = console_width - 2;
        int height = console_height - 2;
        //  Arriba
        for (int i = 2; i < width; i++)
        {
            posicion_en_consola(i, 4);
            printf("%c", 205);
        }

        // Abajo
        for (int i = 2; i < width; i++)
        {
            posicion_en_consola(i, height);
            printf("%c", 205);
        }

        // Izquierda
        for (int i = 5; i < height; i++)
        {
            posicion_en_consola(1, i);
            printf("%c", 186);
        }

        // Derecha
        for (int i = 5; i < height; i++)
        {
            posicion_en_consola(width, i);
            printf("%c", 186);
        }

        // Arriba - Izquierda
        posicion_en_consola(1, 4);
        printf("%c", 201);

        // Arriba - Derecha
        posicion_en_consola(width, 4);
        printf("%c", 187);

        // Abajo - Izquierda
        posicion_en_consola(1, height);
        printf("%c", 200);

        // Abajo - Derecha
        posicion_en_consola(width, height);
        printf("%c", 188);

        config();
    }
}

#endif