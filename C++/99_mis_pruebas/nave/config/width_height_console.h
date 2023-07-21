#ifndef width_height_console_h
#define width_height_console_h

int Console_width()
{
    int width = 0;
    if (GetConsoleScreenBufferInfo(salida_consola, &csbi))
    {
        int console_width = csbi.srWindow.Right - csbi.srWindow.Left + 1;

        width = console_width - 2;

        return width;
    }
    return width;
}

int Console_height()
{
    int height = 0;
    if (GetConsoleScreenBufferInfo(salida_consola, &csbi))
    {
        int console_height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

        height = console_height - 2;

        return height;
    }
    return height;
}

#endif