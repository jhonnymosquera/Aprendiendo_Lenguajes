#ifndef config_h
#define config_h

// Variables Globales
bool game_over = false;
int x = 10, y = 10; // posicion inicial de la nave
HANDLE salida_consola = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO csbi;
COORD currentConsoleSize;
COORD newConsoleSize;
// Variables Globales

// TECLAS DE MOVIMIENTO mas info https://elcodigoascii.com.ar/
#define ARRIBA 72
#define DERECHA 77
#define ABAJO 80
#define IZQUIERDA 75
// TECLAS DE MOVIMIENTO

void posicion_en_consola(int x, int y)
{
    COORD coordenadas;
    coordenadas.X = x;
    coordenadas.Y = y;

    SetConsoleCursorPosition(salida_consola, coordenadas);
}

void config()
{
    // Ocultar Cursor
    CONSOLE_CURSOR_INFO CCI;

    GetConsoleCursorInfo(salida_consola, &CCI);
    CCI.bVisible = false;
    SetConsoleCursorInfo(salida_consola, &CCI);
    // Ocultar Cursor
}

#endif