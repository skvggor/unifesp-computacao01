#include <stdio.h>
#include <math.h>

main() {
  float raio, volume;
  
  printf("\nDigite o raio da esfera: ");
  scanf("%f", &raio);

  volume = (4 / 3) * M_PI * pow(raio, 3);

  printf("A volume de um esfera com diâmetro igual a %f é %f\n", raio + raio, volume);
}