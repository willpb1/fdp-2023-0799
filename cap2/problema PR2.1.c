#include <math.h>
#include <stdio.h>

void main(void) {
  float RES;
  int R, T, Q;
  printf("ingrese los valores de R, T, Q: ");
  scanf("%d %d %d", &R, &T, &Q);
  RES = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2);
  if (RES < 820)
    printf("\nR = %\tT = %d\t Q = %d", R, T, Q);
}