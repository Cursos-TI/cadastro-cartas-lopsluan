#include <stdio.h>

int main() {

  char estado1, estado2;
  char codigo1[3], codigo2[3];
  char cidade1[20], cidade2[20];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int numeroPontosTuristicos1, numeroPontosTuristicos2;

  printf("Digite o estado: ");
  scanf(" %c", &estado1);

  printf("Digite o código da carta (01 a 04): ");
  scanf("%2s", &codigo1);

  printf("digite o nome da cidade (max 20 caracteres): ");
  scanf("%19s", cidade1);

  printf("Digite a população da cidade: ");
  scanf("%d", &populacao1);

  printf("Digite a area da cidade (em km2): ");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos da cidade: ");
  scanf("%d", &numeroPontosTuristicos1);

  printf("\n");

  printf("Digite o estado: ");
  scanf(" %c", &estado2);

  printf("Digite o código da carta (01 a 04): ");
  scanf("%2s", &codigo2);

  printf("digite o nome da cidade (max 20 caracteres): ");
  scanf("%19s", cidade2);

  printf("Digite a população da cidade: ");
  scanf("%d", &populacao2);

  printf("Digite a area da cidade (em km2): ");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos da cidade: ");
  scanf("%d", &numeroPontosTuristicos2);

  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %c%s\n", estado1, codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km2\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %c%s\n", estado2, codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km2\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos2);

  return 0;
}
