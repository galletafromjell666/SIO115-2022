/*
Cree una aplicación en C, que realice la función del comando cat,
 es decir que despliegue en pantalla el contenido de un archivo de texto,
  únicamente empleando las llamadas al sistema que sean necesarias.
*/

#include <unistd.h>
#include <fcntl.h>

void main()
{
    char buffer;
    int archivoOriginal;

    archivoOriginal = open("archivo_original", O_RDONLY);

    if (archivoOriginal == -1)
    {
        // error
        close(archivoOriginal);
        return;
    }

    while (read(archivoOriginal, &buffer, 1))
    {
        write(1, &buffer, 1);
    }

    close(archivoOriginal);
}