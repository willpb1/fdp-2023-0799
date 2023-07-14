#include <stdio.h>
#include <string.h>

union datos {
    char celular[15];
    char correo[20];
};

typedef struct {
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    union datos personales;
} alumno;

void Lectura(alumno *a);

int main(void) {
    alumno a1 = {120, "María", "Contabilidad", 8.9, {"5-158-40-50"}};
    alumno a2, a3;

    printf("Alumno 2\n");
    printf("Ingrese la matrícula: ");
    scanf("%d", &a2.matricula);
    fflush(stdin);

    printf("Ingrese el nombre: ");
    fgets(a2.nombre, sizeof(a2.nombre), stdin);

    printf("Ingrese la carrera: ");
    fgets(a2.carrera, sizeof(a2.carrera), stdin);

    printf("Ingrese el promedio: ");
    scanf("%f", &a2.promedio);
    fflush(stdin);

    printf("Ingrese el correo electrónico: ");
    fgets(a2.personales.correo, sizeof(a2.personales.correo), stdin);

    printf("Alumno 3\n");
    Lectura(&a3);

    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula);
    printf("%s", a1.nombre);
    printf("%s", a1.carrera);
    printf("%.2f\n", a1.promedio);
    printf("%s\n", a1.personales.celular);
    printf("%s\n", a1.personales.correo);

    printf("\nDatos del alumno 2\n");
    printf("%d\n", a2.matricula);
    printf("%s", a2.nombre);
    printf("%s", a2.carrera);
    printf("%.2f\n", a2.promedio);
    printf("%s\n", a2.personales.celular);
    printf("%s\n", a2.personales.correo);

    printf("\nDatos del alumno 3\n");
    printf("%d\n", a3.matricula);
    printf("%s", a3.nombre);
    printf("%s", a3.carrera);
    printf("%.2f\n", a3.promedio);
    printf("%s\n", a3.personales.celular);
    printf("%s\n", a3.personales.correo);

    return 0;
}

void Lectura(alumno *a) {
    printf("\nIngrese la matrícula: ");
    scanf("%d", &a->matricula);
    fflush(stdin);

    printf("Ingrese el nombre: ");
    fgets(a->nombre, sizeof(a->nombre), stdin);

    printf("Ingrese la carrera: ");
    fgets(a->carrera, sizeof(a->carrera), stdin);

    printf("Ingrese el promedio: ");
    scanf("%f", &a->promedio);
    fflush(stdin);

    printf("Ingrese el teléfono celular: ");
    fgets(a->personales.celular, sizeof(a->personales.celular), stdin);
}
