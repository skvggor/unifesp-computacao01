#include <stdio.h>
#include <math.h>

main() {
  float area, raio;

  printf("\nDigite o raio: ");
  scanf("%f", &raio);

  area = M_PI * pow(raio, 2);

  printf("A área de um círculo com diâmetro igual a %f é %f\n", raio + raio, area);
}