/*
Cree una aplicación en C, que imprima en pantalla tres veces la frase que se escribe por la entrada estándar,
sin utilizar función scanf, únicamente empleando las llamadas al sistema que sean necesarias.
Tome en cuenta máximo 30 bytes.
*/
#include <unistd.h>
int main()
{
    int nread, i;
    char buff[30];
    nread = read(0, buff, 30);
    for (i = 0; i < 3; i++)
    {
        write(1, buff, nread);
    }
}