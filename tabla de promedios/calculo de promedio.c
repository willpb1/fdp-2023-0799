#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;
    char nAlumno[50] = "";
    char materia[50] = "";
    float p1 = 0.0;
    float p2 = 0.0;
    float p3 = 0.0;
    float promedio = 0.0;

    FILE *ar;
    ar = fopen("arc8.txt", "a");

    do {
        printf("\n----- MENU -----\n");
        printf("1. Agregar estudiante\n");
        printf("2. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("\nIgresa Nombre Alumno: ");
                scanf("%s", nAlumno);

                printf("\nIgresa Nombre Materia: ");
                scanf("%s", materia);

                printf("\nIgresa Valor Parcial 1: ");
                scanf("%f", &p1);

                printf("\nIgresa Valor Parcial 2: ");
                scanf("%f", &p2);

                printf("\nIgresa Valor Parcial 3: ");
                scanf("%f", &p3);

                promedio = (p1 + p2 + p3) / 3.0;
                printf("|MATERIA|\t|ALUMNO|\t|P1|\t|P2|\t|P3|\t|PROMEDIO|");
                printf("\n%s\t%s\t%0.2f\t%0.2f\t%0.2f\t%0.2f", materia, nAlumno, p1, p2, p3, promedio);

                fprintf(ar, "\n%s\t%s\t%0.2f\t%0.2f\t%0.2f\t%0.2f", materia, nAlumno, p1, p2, p3, promedio);
                break;

            case 2:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion invalida. Intente nuevamente.\n");
                break;
        }
    } while (opcion != 2);

    fclose(ar);
    return 0;
}