#include <stdio.h>
#include <math.h>

/* Suma de cuadrados.
El programa, al recibir como datos un grupo de enteros positivos, obtiene el cuadrado de los mismos y la suma correspondiente a dicho cuadrado.*/

void main(void)
{
  int NUM;
  long CUA, SUC = 0;
  printf("\nIngrese un numero entero -0 para terminar:\t");
  scanf("%d", &NUM);
  while (NUM)
    /* observa quw la condicion es verdadera mientras el entero es diferente de cero. */
    {
      CUA = pow (NUM, 2);
      printf("%d al cubo es %d", NUM, CUA);
      SUC = SUC + CUA;
      printf("\nIngrese un numero entero 0 para terminar-:\t");
      scanf("%d", &NUM);
    }
  printf("\nLa suma de los cuadrados es %Ld", SUC);
}
