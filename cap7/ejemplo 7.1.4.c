#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *cad0;
    cad0 = "Argentina";
    puts(cad0);

    cad0 = "Brasil";
    puts(cad0);

    char *cad1 = "";
    char buffer[20];
    printf("Ingrese una línea de texto: ");
    fgets(buffer, 20, stdin);
    strcpy(cad1, buffer);
    puts(cad1);

    char cad2[20] = "México";
    puts(cad2);
    printf("Ingrese una línea de texto: ");
    fgets(buffer, 20, stdin);
    strcpy(cad2, buffer);
    puts(cad2);

    // Intentar asignar "Guatemala" a cad2[10] genera un error de compilación
    // porque cad2 solo tiene capacidad para 20 caracteres (del 0 al 19).
    // Si se quisiera modificar la cadena en la posición 10, se podría hacer
    // de la siguiente manera:
    cad2[10] = 'G';
    cad2[11] = 'u';
    cad2[12] = 'a';
    cad2[13] = 't';
    cad2[14] = 'e';
    cad2[15] = 'm';
    cad2[16] = 'a';
    cad2[17] = 'l';
    cad2[18] = 'a';
    cad2[19] = '\0';

    return 0;
}