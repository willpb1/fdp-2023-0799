#include <stdio.h>

void main(void)
{
float PRE, NPR;
printf("ingrese el precio del producto: ");
scanf("%f", &PRE);

  if (PRE > 1500)
{
    NPR = PRE * 1.11;
    ("\nNuevo precio: %7.2f", NPR);
}
}