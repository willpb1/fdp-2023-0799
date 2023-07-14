#include <stdio.h>
#include <string.h>

/* Vendedores. El programa maneja información sobre las ventas que realizan los vendedores de artículos domésticos de una importante empresa de la Ciudad de México. */

typedef struct
{
    char noba[10];
    char nucu[10];
} banco;

typedef union
{
    banco che;
    banco nomi;
    char venta;
} fpago;

typedef struct
{
    char cnu[20];
    char col[20];
    char cp[6];
    char ciu[15];
} domicilio;

typedef struct
{
    int num;
    char nom[20];
    float ven[12];
    domicilio domi;
    float sal;
    fpago pago;
    int cla;
} vendedor;

void Lectura(vendedor *, int);
void F1(vendedor *, int);
void F2(vendedor *, int);
void F3(vendedor *, int);
void F4(vendedor *, int);

void main(void)
{
    vendedor VENDEDORES[100]; /* Declaración del arreglo unidimensional de tipo estructura vendedor. */
    int TAM;

    do
    {
        printf("Ingrese el número de vendedores: ");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);

    /* Se verifica que el número de elementos del arreglo sea correcto. */
    Lectura(VENDEDORES, TAM);
    F1(VENDEDORES, TAM);
    F2(VENDEDORES, TAM);
    F3(VENDEDORES, TAM);
    F4(VENDEDORES, TAM);
    printf("\n\tFIN DEL PROGRAMA");
}

void Lectura(vendedor A[], int T)
{
    int I, J;

    for (I = 0; I < T; I++)
    {
        printf("\nIngrese datos del vendedor %d", I + 1);
        printf("\nNúmero de vendedor: ");
        scanf("%d", &A[I].num);
        printf("Nombre del vendedor: ");
        fflush(stdin);
        gets(A[I].nom);

        printf("Ventas del año: \n");
        for (J = 0; J < 12; J++)
        {
            printf("\tMes %d: ", J + 1);
            scanf("%f", &A[I].ven[J]);
        }

        printf("Domicilio del vendedor: \n");
        printf("\tCalle y número: ");
        fflush(stdin);
        gets(A[I].domi.cnu);
        printf("\tColonia: ");
        fflush(stdin);
        gets(A[I].domi.col);
        printf("\tCódigo Postal: ");
        fflush(stdin);
        gets(A[I].domi.cp);
        printf("\tCiudad: ");
        fflush(stdin);
        gets(A[I].domi.ciu);

        printf("Salario del vendedor: ");
        scanf("%f", &A[I].sal);

        printf("Forma de Pago (Banco-1 Nómina-2 Ventanilla-3): ");
        scanf("%d", &A[I].cla);

        switch (A[I].cla)
        {
        case 1:
            printf("\tNombre del banco: ");
            fflush(stdin);
            gets(A[I].pago.che.noba);
            printf("\tNúmero de cuenta: ");
            fflush(stdin);
            gets(A[I].pago.che.nucu);
            break;
        case 2:
            printf("\tNombre del banco:");
        }
    }
