#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1;
    char codCarta1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numPontosTuristicos1;
    float densiPop1;

    char estado2;
    char codCarta2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numPontosTuristicos2;
    float densiPop2;

  // Área para entrada de dados
   printf("Cadastre a primeira carta\n");
    printf("Qual o estado?\n");
    scanf(" %c", &estado1);

    printf("Codigo da carta:\n");
    scanf(" %s",&codCarta1);

    printf("Nome da cidade:\n");
    scanf("%s", &nomeCidade1);

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Àrea(em km):\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos:\n");
    scanf("%d", &numPontosTuristicos1);


     printf("Cadastre a segunda carta\n");
    printf("Qual o estado?\n");
    scanf(" %c", &estado2);

    printf("Codigo da carta:\n");
    scanf(" %s",&codCarta2);

    printf("Nome da cidade:\n");
    scanf("%s", &nomeCidade2);

    printf("População:\n");
    scanf("%d", &populacao2);

    printf("Àrea(em km):\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos:\n");
    scanf("%d", &numPontosTuristicos2);

  // Área para exibição dos dados da cidade

    printf("Estado: %c \n", estado1);
    printf("Cod: %s \n", codCarta1);
    printf("Nome da cidade: %s \n", nomeCidade1);
    printf("População: %d mil habitantes \n", populacao1);
    printf("Area em km: %d \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Numero de pontos turisticos: %d \n", numPontosTuristicos1);

     printf("Estado: %c \n", estado2);
    printf("Cod: %s \n", codCarta2);
    printf("Nome da cidade: %s \n", nomeCidade2);
    printf("População: %d mil habitantes \n", populacao2);
    printf("Area em km: %d \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Numero de pontos turisticos: %d \n", numPontosTuristicos2);

return 0;
} 
