/*
Cree una aplicación en C, en la que un proceso escriba en pantalla “Sistemas Operativos 2022-”
 sin utilizar la función printf, únicamente empleando las llamadas al sistema que sean necesarias.
*/

#include <unistd.h>
int main()
{
    const char msg[] = "Sistemas Operativos 2022-";
    write(1, msg, sizeof(msg) - 1);
    return 0;
}