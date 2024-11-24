#include <stdio.h>
#ifdef __unix__  // Solo compilar en sistemas Unix
#include <unistd.h>  // Incluir la librería que define getuid() y geteuid()
#endif

int main()
{
#ifdef __unix__
    printf("real uid: %d\n", getuid());
    printf("effective uid: %d\n", geteuid());
#else
    printf("getuid y geteuid no están disponibles en este sistema.\n");
#endif
    return 0;
}
