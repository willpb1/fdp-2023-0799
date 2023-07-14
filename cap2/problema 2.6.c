#include <stdio.h>

void main(void)
{
  float SAL;
  int NUV;
  printf("ingrese el nivel academico del profesor:  ");
  scanf("%d", &NUV);
  printf("ingrese ek salario:  ");
  scanf("%f", &SAL);
  switch(NUV)
  {
    case 1 : SAL = SAL * 1.0035; break;
    case 2 : SAL = SAL *1.0041; break;
    case 3 : SAL = SAL * 1.0048; break;
    case 4 : SAL = SAL * 1.0053; break;
  }
   ("\n\nNibel: %d \tNuevo salario: %8.2f", NUV, SAL);
}