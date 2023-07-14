#include <stdio.h>
#include <stdio.h>

void main(void)
{
 int OP, T;
  float RES;
  printf("ingrese la opción del cálculo y el valor: ");
 scanf("%d %d", &OP, &T);
 swith(OP);
  {

    case1: RES = T / 5;
    case2: RES = pow(T, T);
    case3: RES = 6 * T/2;
    Default: RES = 1;
  }
  printf("\nResulyado:  %7.2f", RES);
}