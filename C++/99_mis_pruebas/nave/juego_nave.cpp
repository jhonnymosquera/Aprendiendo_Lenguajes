#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>

using namespace std;

// #include "globales.h"
#include "config/config.h"
#include "config/width_height_console.h"
#include "config/escenario.h"
#include "objetos/nave.h"
#include "objetos/asteroide.h"

int main()
{
    config();
    pintar_scenario();
    NAVE NAVE(console_width / 2, console_height - 3);

    NAVE.pintar();

    GetConsoleScreenBufferInfo(salida_consola, &csbi);
    currentConsoleSize.X = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    currentConsoleSize.Y = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

    while (!game_over)
    {
        NAVE.mover();

        GetConsoleScreenBufferInfo(salida_consola, &csbi);
        newConsoleSize.X = csbi.srWindow.Right - csbi.srWindow.Left + 1;
        newConsoleSize.Y = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

        if (newConsoleSize.X != currentConsoleSize.X || newConsoleSize.Y != currentConsoleSize.Y)
        {
            system("cls");

            pintar_scenario();
            NAVE.re_pintar(Console_width() / 2, Console_height() - 3);

            currentConsoleSize = newConsoleSize;
        }
        Sleep(10);
    }

    return 0;
}