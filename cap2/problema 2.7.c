#include <stdio.h>

void main(void)
{
  float P, S, R;
  printf("\ningrese las ventas de los tres vendedores: ");
  scanf("%f %f %f" , &P, &S, &R);
  if(P > S);
   if(P > R);
    if(S > R);
       printf("\n\n El orden es P, S, R:  %8.2f %8.2f %8.2f", P, S, R);
  
       printf("\n\n El orden es P, R, S: %8.2f %8.2f %8.2f", P, R, S);
  
      printf("\n\n El orden es R, P, S: %8.2f %8.2f %8.2f", R, P, S);
  
  if(S > R)
    if(P > R)
       printf("\n\n El orden es S, P, R: %8.2f %8.2f %8.2f", S, P, R);
    else
       printf("\n\n El orden es S, R, P: %8.2f %8.2f %8.2f", S, R, P);
  else 
    printf("\n\n El orden es R, S, P: %8.2f %8.2f %8.2f", R, S, P);
}