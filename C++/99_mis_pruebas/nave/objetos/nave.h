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

            tecla == IZQUIERDA &&x > 3 ? x -= 2 : tecla;
            tecla == DERECHA &&x < Console_width() - 7 ? x += 2 : tecla;

            /*simulando un salgo*/
            

            // if (tecla == ARRIBA)
            // {
            //     for (int i = 0; i < 5; i++)
            //     {
            //         this->borrar();
            //         y--;
            //         this->pintar();
            //         Sleep(50);
            //     }

            //     for (int i = 0; i < 5; i++)
            //     {
            //         this->borrar();
            //         y++;
            //         this->pintar();
            //         Sleep(50);
            //     }
            // }
            // tecla == ABAJO ? y++ : tecla;

            this->pintar();
        }
    };
};

#endif