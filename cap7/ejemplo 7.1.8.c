#include <stdio.h>
#include <string.h>
#include <ctype.h>

void minymay(char *cad); // Prototipo de función corregido.

int main(void) // Cambiado a int main() y agregado el retorno.
{
    int i, n;
    char FRA[20][50];

    printf("\nIngrese el número de filas del arreglo: ");
    scanf("%d", &n);

    getchar(); // Agregado para consumir el '\n' restante después de scanf.

    for (i = 0; i < n; i++)
    {
        printf("Ingrese la línea %d de texto: ", i + 1);
        fgets(FRA[i], sizeof(FRA[i]), stdin); // Cambiado gets() por fgets() para evitar desbordamiento de búfer.
    }

    printf("\n\n");

    for (i = 0; i < n; i++)
        minymay(FRA[i]);

    return 0; // Agregado el retorno.
}

void minymay(char *cadena)
{
    int i = 0, mi = 0, ma = 0;

    while (cadena[i] != '\0')
    {
        if (islower(cadena[i]))
            mi++;
        else if (isupper(cadena[i]))
            ma++;

        i++;
    }

    printf("\n\nNúmero de letras minúsculas: %d", mi);
    printf("\nNúmero de letras mayúsculas: %d", ma);
}
       
      