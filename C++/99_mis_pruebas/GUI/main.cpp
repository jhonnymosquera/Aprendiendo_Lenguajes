

#define _WIN32_WINNT 0x0500
#include <tchar.h>
#include <windows.h>

/*  Declare Windows procedure  */

HWND ventana1;
HWND ventana2;
HWND boton1, boton2;

LRESULT CALLBACK WindowProcedure(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message) /* handle the messages */
    {
    case WM_DESTROY:
        PostQuitMessage(0); /* send a WM_QUIT to the message queue */
        break;

    case WM_CREATE:
        boton1 = CreateWindowEx(0, "button", "Aceptar", WS_VISIBLE & WS_CHILD, 5, 5, 80, 25, ventana1, 0, 0, 0);
        boton2 = CreateWindowEx(0, "button", "cancelar", WS_VISIBLE & WS_CHILD, 5, 30, 80, 25, ventana1, 0, 0, 0);

        break;

    default: /* for messages that we don't deal with */
        return DefWindowProc(hwnd, message, wParam, lParam);
    }

    return 0;
}

/*  Make the class name into a global variable  */
TCHAR szClassName[] = _T("CodeBlocksWindowsApp");

int WINAPI WinMain(HINSTANCE hThisInstance,
                   HINSTANCE hPrevInstance,
                   LPSTR lpszArgument,
                   int nCmdShow)
{
    MSG messages;     /* Here messages to the application are saved */
    WNDCLASSEX wincl; /* Data structure for the windowclass */

    /* The Window structure */
    wincl.hInstance = hThisInstance;
    wincl.lpszClassName = szClassName;
    wincl.lpfnWndProc = WindowProcedure; /* This function is called by windows */
    wincl.style = CS_DBLCLKS;            /* Catch double-clicks */
    wincl.cbSize = sizeof(WNDCLASSEX);

    /* Use default icon and mouse-pointer */
    wincl.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wincl.hIconSm = LoadIcon(NULL, IDI_INFORMATION); /* Icono de la ventana*/
    wincl.hCursor = LoadCursor(NULL, IDC_ARROW);
    wincl.lpszMenuName = NULL; /* No menu */
    wincl.cbClsExtra = 0;      /* No extra bytes after the window class */
    wincl.cbWndExtra = 0;      /* structure or the window instance */
    /* Use Windows's default colour as the background of the window */
    wincl.hbrBackground = (HBRUSH)COLOR_WINDOW; /*Color de fondo*/

    /* Register the window class, and if it fails quit the program */
    if (!RegisterClassEx(&wincl))
        return 0;

    /* The class is registered, let's create the program*/

    ventana1 = CreateWindowEx(
        0,                                   /* Extended possibilites for variation */
        szClassName,                         /* Classname */
        _T("Elementos de interfaz Grafica"), /* Title Text */
        WS_OVERLAPPEDWINDOW,                 /* default window */
        CW_USEDEFAULT,                       /* Windows decides the position */
        CW_USEDEFAULT,                       /* where the window ends up on the screen */
        800,                                 /* The programs width */
        600,                                 /* and height in pixels */
        HWND_DESKTOP,                        /* The window is a child-window to desktop */
        NULL,                                /* No menu */
        hThisInstance,                       /* Program Instance handler */
        NULL                                 /* No Window Creation data */
    );

    /* Make the window visible on the screen */
    ShowWindow(ventana1, nCmdShow);
    // ShowWindow(GetConsoleWindow(), SW_HIDE);

    /* Run the message loop. It will run until GetMessage() returns 0 */
    while (GetMessage(&messages, NULL, 0, 0))
    {
        /* Translate virtual-key messages into character messages */
        TranslateMessage(&messages);
        /* Send message to WindowProcedure */
        DispatchMessage(&messages);
    }

    /* The program return-value is 0 - The value that PostQuitMessage() gave */
    return messages.wParam;
}
