#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

  int main(){

    char estado1 [50], codigo_carta1 [50], nome_cidade1 [50];
    int populacao1, pontos_turisticos1;
    float km²1, pib1;

    printf("***Primeira carta Super trunfo***\n");
    printf("Digite o estado: ");
    scanf(" %s", &estado1);

    printf("Digite o codigo da carta: ");
    scanf("%s", &codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade1);

    printf("Digite o numero de habitantes desta cidade: ");
    scanf("%d", &populacao1);

    printf("Quantos km2 tem esta cidade: ");
    scanf("%f", &km²1);

    printf("Qual o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos tem essa cidade: \n");
    scanf(" %d", &pontos_turisticos1);

    printf("Carta 01\n");
    printf("Estado: %s \n", &estado1);
    printf("Código:%s \n", &codigo_carta1);
    printf("Nome da Cidade: %s \n", &nome_cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %fkm² \n",km²1);
    printf("PIB: %f Bilhões de reais \n", pib1);
    printf("Número de pontos turisticos: %d \n", pontos_turisticos1);


///////////////////////////////////////////////////////////////////////////////////

    char estado2 [50], codigo_carta2 [50], nome_cidade2 [50];
    int populacao2, pontos_turisticos2;
    float km²2, pib2;

    printf("***Segunda carta Super trunfo***\n");
    printf("Digite o estado: ");
    scanf(" %s", &estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", &codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade2);

    printf("Digite o numero de habitantes desta cidade: ");
    scanf("%d", &populacao2);

    printf("Quantos km2 tem esta cidade: ");
    scanf("%f", &km²2);

    printf("Qual o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos tem essa cidade: \n");
    scanf(" %d", &pontos_turisticos2);

    printf("Carta 02\n");
    printf("Estado: %s \n", &estado2);
    printf("Código:%s \n", &codigo_carta2);
    printf("Nome da Cidade: %s \n", &nome_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %fkm² \n",km²2);
    printf("PIB: %f Bilhões de reais \n", pib2);
    printf("Número de pontos turisticos: %d \n", pontos_turisticos2);

    return 0;
}
