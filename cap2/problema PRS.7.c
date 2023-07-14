#include <stdio.h>

void main(void)
{
 int TRA, EDA, DIA;
 float Cos;
 printf("ingrese el tipo de tartamiento, edad y días: ");
 scanf("%d %d %d", &TRA, &EDA, &DIA);
 switch(TRA);

if (Cos !=-1)
 {
      if (EDA >= 60)
          Cos = Cos *  0.75;
      else
          if (EDA <= 25)
            Cos = Cos * 0.85;
      printf("\nLa clave tratamiento: %d\t Días: %d\nt Costo total: %8.2f", TRA, DIA, Cos);
 }
  else
     printf("\nLa clave de tratamiento es incorreta");
   
}