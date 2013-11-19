#include <stdio.h>
#include <math.h>

main() {
  float a, b, c, delta, raiz1, raiz2;

  printf("\nDigite os coeficientes do polinômio de grau 2:\n ");

  // A
  printf("A = ");
  scanf("%f", &a);

  // B
  printf("B = ");
  scanf("%f", &b);

  // C
  printf("C = ");
  scanf("%f", &c);

  delta = sqrt(b * b - 4 * a * c);
  raiz1 = (-b + delta) / (2 * a);
  raiz2 = (-b - delta) / (2 * a);

  printf("As raízes são %f e %f \n", raiz1, raiz2);
}