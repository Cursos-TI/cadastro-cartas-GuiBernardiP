#include <stdio.h>

int main(){

    char estado [50];
    char codigo_carta [50];
    char nome_cidade [50];
    signed long int populacao;
    int pontos_turisticos;
    float km2;
    float pib;
    
    char estado2 [50];
    char codigo_carta2 [50];
    char nome_cidade2 [50];
    signed long int populacao2;
    int pontos_turisticos2;
    float km²2;
    float pib2;
    
    printf("* Super Trunfo Paises *\n");

    printf("Digite o estado para a primeira carta: ");
    scanf(" %c", &estado);

    printf("Digite o codigo da primeira carta: ");
    scanf(" %s", &codigo_carta);

    printf("Digite o nome da primeira cidade: ");
    scanf("%s", &nome_cidade);

    printf("Digite o numero de habitantes desta primeira cidade: ");
    scanf("%d", &populacao);

    printf("Quantos km2 tem esta primeira cidade: ");
    scanf("%f", &km2);

    printf("Qual o PIB da primeira cidade: ");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos tem a primeira cidade: \n");
    scanf("%d", &pontos_turisticos);

    float densidade = (float) populacao / km2;
    float capita = (float) populacao / pib;

    printf("Digite o estado para a segunda carta: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da segunda carta: ");
    scanf(" %s", &codigo_carta2);

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", &nome_cidade2);

    printf("Digite o numero de habitantes desta segunda cidade: ");
    scanf("%d", &populacao2);

    printf("Quantos km2 tem esta segunda cidade: ");
    scanf("%f", &km²2);

    printf("Qual o PIB da segunda cidade: ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos tem a segunda cidade: \n");
    scanf("%d", &pontos_turisticos2);

    
    float densidade2 = (float) populacao2 / km²2;
    float capita2 = (float) populacao2 / pib2;

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2fkm²\n", km2);
    printf("Pib: %.2f Bilhões de Reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("Pib per Capita: %.2f\n", capita);

    printf("*********\n");

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", km²2);
    printf("Pib: %.2f Bilhões de Reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("Pib per Capita: %.2f\n", capita2);

    int inverso_densidade = 1 / densidade;
    int inverso_densidade2 = 1 / densidade2;
    float Superpoder = (float)populacao + km2 + pib + inverso_densidade;
    float SuperPoder2 =(float)populacao2 + km²2 + inverso_densidade2;

    int r_populacao =(populacao > populacao2);
    int r_km² =(km2 > km²2);
    int r_pib =(pib > pib);
    int r_pontos_turisticos =(pontos_turisticos > pontos_turisticos2);
    int r_inverso_densidade =(inverso_densidade < inverso_densidade2);
    int r_capita =(capita > capita2);
    int r_superpoder =(Superpoder > SuperPoder2);

    printf("\n*********\n");
    
    printf("\n***Comparação das Cartas***\n");

    printf("População: %d\n", r_populacao);
    printf("Área: %d\n", r_km²); 
    printf("PIB: %d\n", r_pib);
    printf("Pontos Turisticos: %d\n", r_pontos_turisticos);
    printf("Densidade Populacional: %d\n", r_inverso_densidade);
    printf("PIB per Capita: %d\n", r_pib);
    printf("Super Poder: %d\n", r_superpoder);

    return 0;
}