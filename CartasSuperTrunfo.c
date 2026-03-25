#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){

    char estado [50], codigo_carta [50], nome_cidade [50];
    int populacao, pontos_turisticos;
    float km2, pib;

    char estado2 [50], codigo_carta2 [50], nome_cidade2 [50];
    int populacao2, pontos_turisticos2;
    float km²2, pib2;

    printf("* Super Trunfo Paises *\n");

    printf("Digite o estado para a primeira carta: ");
    scanf(" %s", &estado);

    printf("Digite o codigo da primeira carta: ");
    scanf("%s", &codigo_carta);

    printf("Digite o nome da primeira cidade: ");
    scanf("%s", &nome_cidade);

    printf("Digite o numero de habitantes desta primeira cidade: ");
    scanf("%d", &populacao);

    printf("Quantos km2 tem esta primeira cidade: ");
    scanf("%f", &km2);
    
    printf("Qual o PIB da primeira cidade: ");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos tem a primeira cidade: \n");
    scanf(" %d", &pontos_turisticos);

    float densidade = (float) populacao / km2;
    float capita = (float) populacao / pib;

    printf("Digite o estado para a segunda carta: ");
    scanf(" %s", &estado2);

    printf("Digite o codigo da segunda carta: ");
    scanf("%s", &codigo_carta2);

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", &nome_cidade2);

    printf("Digite o numero de habitantes desta segunda cidade: ");
    scanf("%d", &populacao2);
    
    printf("Quantos km2 tem esta segunda cidade: ");
    scanf("%f", &km²2);

    printf("Qual o PIB da segunda cidade: ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos tem a segunda cidade: \n");
    scanf(" %d", &pontos_turisticos);

    float densidade2 = (float) populacao2 / km²2;
    float capita2 = (float) populacao2 / pib2;

    printf("Carta 01\n");
    printf("Estado: %s \n", &estado);
    printf("Código:%s \n", &codigo_carta);
    printf("Nome da Cidade: %s \n", &nome_cidade);
    printf("População: %d \n", populacao);
    printf("Área: %fkm² \n",km2);
    printf("PIB: %f Bilhões de reais \n", pib);
    printf("Número de pontos turisticos: %d \n", pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("Pib per Capita: %.2f\n", capita);

    printf("***************************\n");

    printf("Carta 02\n");
    printf("Estado: %s \n", &estado2);
    printf("Código:%s \n", &codigo_carta2);
    printf("Nome da Cidade: %s \n", &nome_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %fkm² \n",km²2);
    printf("PIB: %f Bilhões de reais \n", pib2);
    printf("Número de pontos turisticos: %d \n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("Pib per Capita: %.2f\n", capita2);

    return 0;
}