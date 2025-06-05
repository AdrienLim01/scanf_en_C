#include <stdio.h>

int main(void)
{
  printf("Quel est l'initial de votre prénom ?\n");
  char initial;
  scanf(" %c", &initial);

  printf("Quel est votre âge ?\n");
  int age;
  scanf("%d", &age);

  printf("Quel est votre moyenne général sur 20 ?\n");
  float moyenne;
  scanf("%f", &moyenne);

  printf("L'initial de votre prénom est : %c -- Votre âge est de %d ans -- Votre moyenne général est de %.2f sur 20", initial, age, moyenne);
  return 0;
}
