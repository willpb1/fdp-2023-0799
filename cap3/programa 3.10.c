#include <stdio.h>
#include <math.h>

/* pares e impares.
el programa al recibir como dato N numeros enteros, obtiene la suma de los numeros pared y calcula el promedio de los impares.

  I, N, NUM, SPA, SIM, CIM: variable de tipos enteros. */

void main(void)
{
  int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;
  printf("ingrese el numero de datos que se van a procesar:\t");
  scanf("%d", &N);
  if (N > 0)
  {
    for (I = 1; I <= N; I++)
      {
        printf("\nIngrese el numero %d:\t");
        scanf("%d", &N);
        if (NUM)
          if (pow(-1, NUM) > 0)
            SPA = SPA + NUM;
        else
          {
            SIM = SIM + NUM;
            CIM++;
          }
      }
    printf("\n La suma de los numeros pares es: %d", SPA);
    printf("\n El promedio de numero impares es: %5.2f", (float)(SIM / CIM));
  }
  else 
    printf("\n El valor de N es incorrecto");
}