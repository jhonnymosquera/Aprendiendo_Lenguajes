#ifndef nave_h
#define nave_h

class NAVE
{
    int x, y;

public:
    NAVE(int _x, int _y) : x(_x), y(_y) {}

    void pintar()
    {

        // primera linea de la nave
        posicion_en_consola(x, y);
        printf("  %c", 30);
        // segunda linea de la nave
        posicion_en_consola(x, y + 1);
        printf(" %c%c%c", 40, 207, 41);
        // tercera linea de la nave
        posicion_en_consola(x, y + 2);
        printf("%c%c %c%c", 30, 190, 190, 30);
    }

    void re_pintar(int x, int y)
    {
        // primera linea de la nave
        posicion_en_consola(x, y);
        printf("  %c", 30);
        // segunda linea de la nave
        posicion_en_consola(x, y + 1);
        printf(" %c%c%c", 40, 207, 41);
        // tercera linea de la nave
        posicion_en_consola(x, y + 2);
        printf("%c%c %c%c", 30, 190, 190, 30);

        this->x = x;
        this->y = y;
    }

    void borrar()
    {
        posicion_en_consola(x, y);
        printf("     ");

        posicion_en_consola(x, y + 1);
        printf("     ");

        posicion_en_consola(x, y + 2);
        printf("     ");
    }

    void mover()
    {
        if (kbhit())

        {
            char tecla = getch();
            this->borrar();

            tecla == IZQUIERDA &&x > 2 ? x-- : tecla;
            tecla == DERECHA &&x < Console_width() - 5 ? x++ : tecla;
            // tecla == ARRIBA ? y-- : tecla;
            // tecla == ABAJO ? y++ : tecla;

            this->pintar();
        }
    };
};

#endif