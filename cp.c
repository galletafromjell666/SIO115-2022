/*
Cree una aplicación en C, que realice la función del comando cp, 
es decir que copie el contenido de un archivo origen a un nuevo archivo destino,
únicamente empleando las llamadas al sistema que sean necesarias.
*/
#include <unistd.h>
#include <fcntl.h>

void main()
{
    char buffer;
    int archivoOriginal, archivoCopia;

    archivoOriginal = open("archivo_original", O_RDONLY);

    if (archivoOriginal == -1)
    {
        //error
        close(archivoOriginal);
        return;
    }

    archivoCopia = open("archivo_copia",
                  O_WRONLY | O_CREAT,
                  S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

    while (read(archivoOriginal, &buffer, 1))
    {
        write(archivoCopia, &buffer, 1);
    }


    close(archivoOriginal);
    close(archivoCopia);
}