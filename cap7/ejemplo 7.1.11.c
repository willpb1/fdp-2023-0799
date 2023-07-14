#include <stdio.h>

/* Verifica.
El programa, al recibir como datos una cadena de caracteres y una posición específica en la cadena, determina si el caracter correspondiente es una letra
minúscula. */
int main(void)
{
    char p, cad[51];
    int n;

    printf("\nIngrese la cadena de caracteres (máximo 50): ");
    fgets(cad, 51, stdin);

    printf("\nIngrese la posición en la cadena que desea verificar: ");
    scanf("%d", &n);
    
    if ((n >= 1) && (n <= 50))
    {
        p = cad[n-1];
        if (islower(p))
            printf("\n%c es una letra minúscula", p);
        else
            printf("\n%c no es una letra minúscula", p);
    }
    else
        printf("\nEl valor ingresado de n es incorrecto");

    return 0;
}