#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Lucas

#include <stdio.h>

int main(){
    
    //declaração de variaveis.
    char estado1, estado2, codigo1[5], codigo2[5], nome1[25], nome2[25];
    int popu1, popu2, comparapopu1, comparapopu2;
    float area1, area2, pib1, pib2, pontos1, pontos2, densidade1, densidade2, percapita1, percapita2, superpoder1, superpoder2, densidadeinverso1, densidadeinverso2;
    float comparaarea1, comparapib1, comparapontos1, comparadensidade1, comparapercapta1, comparasuper1;
    float comparaarea2, comparapib2, comparapontos2, comparadensidade2, comparapercapta2, comparasuper2;

    //leitura da primeira carta.
    printf("digite o estado da primeira carta: \n");
    scanf(" %c", &estado1);

    printf("digite o código da primeira carta: \n");
    scanf("%s", codigo1);

    printf("digite a cidade da primeira carta: \n");
    scanf("%s", nome1);

    printf("digite a população da primeira carta: \n");
    scanf("%d", &popu1);

    printf("digite a area da primeira carta: \n");
    scanf("%f", &area1);

    printf("digite o PIB da primeira carta: \n");
    scanf("%f", &pib1);

    printf("digite quantos pontos turisticos tem na primeira carta: \n");
    scanf("%f", &pontos1);

    //calculo da densidade populacional da primeira carta
    densidade1 = (float)(popu1/area1);

    //calculo do PIB per capita da primeira carta
    percapita1 = (float)(pib1/popu1);

    //calculo da densidade inversa da primeira carta
    densidadeinverso1 = (float)(1/densidade1);

    //calculo super poder da primeira carta
    superpoder1 = (float)(popu1 + area1 + pib1 + pontos1 + densidadeinverso1 + percapita1);

    //leitura da segunda carta.
    printf("----------------------------------------------------------------------------\n");
    printf("digite o estado da segunda carta: \n");
    scanf(" %c", &estado2);

    printf("digite o código da segunda carta: \n");
    scanf("%s", codigo2);

    printf("digite a cidade da segunda carta: \n");
    scanf("%s", nome2);

    printf("digite a população da segunda carta: \n");
    scanf("%d", &popu2);

    printf("digite a area da segunda carta: \n");
    scanf("%f", &area2);

    printf("digite o PIB da segunda carta: \n");
    scanf("%f", &pib2);

    printf("digite quantos pontos turisticos tem na segunda carta: \n");
    scanf("%f", &pontos2);

    //calculo da densidade populacional da primeira carta
    densidade2 = (float)(popu2/area2);

    //calculo do PIB per capita da primeira carta
    percapita2 = (float)(pib2/popu2);

    //calculo da densidade inversa da primeira carta
    densidadeinverso2 = (float)(1/densidade2);

    //calculo super poder da primeira carta
    superpoder2 = (float)(popu2 + area2 + pib2 + pontos2 + densidadeinverso2 + percapita2);

    //comparação das cartas resultado para a primeira carta
    comparapopu1 = popu1 > popu2;
    comparaarea1 = area1 > area2;
    comparapib1 = pib1 > pib2;
    comparapontos1 = pontos1 > pontos2;
    comparadensidade1 = densidadeinverso1 < densidadeinverso2;
    comparapercapta1 = percapita1 > percapita2;
    comparasuper1 = superpoder1 > superpoder2;

    //comparação das cartas resultado para a segunda carta
    comparapopu2 = popu2 > popu1;
    comparaarea2 = area2 > area1;
    comparapib2 = pib2 > pib1;
    comparapontos2 = pontos2 > pontos1;
    comparadensidade2 = densidadeinverso2 < densidadeinverso1;
    comparapercapta2 = percapita2 > percapita1;
    comparasuper2 = superpoder2 > superpoder1;


    //imprimindo na tela o resumo da primeira carta.
    printf("_______________PRIMEIRA CARTA______________\n");
    printf("----------------------------------------------------------------------------\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome: %s \n", nome1);
    printf("População: %d \n", popu1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Pontos turisticos: %.f \n", pontos1);
    printf("Densidade Populacional da primeira carta é: %.2f Hab/km² \n", densidade1);
    printf("O PIB per capita da primeirta carta é: R$%.2f reais \n", percapita1);

    
    //imprimindo na tela o resumo da primeira carta.
    printf("_______________SEGUNDA CARTA______________\n");
    printf("----------------------------------------------------------------------------\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome: %s \n", nome2);
    printf("População: %d \n", popu2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Pontos turisticos: %.f \n", pontos2);
    printf("Densidade Populacional da primeira carta é: %.2f Hab/km² \n", densidade2);
    printf("O PIB per capita da primeirta carta é: R$%.2f reais \n", percapita2);
    printf("----------------------------------------------------------------------------\n");

    printf("__________COMPARAÇÃO DAS CARTAS__________\n");
    printf("Populção Carta 1: %d\n",comparapopu1);
    printf("Populção Carta 2: %d\n",comparapopu2);

    printf("Área Carta 1: %.0f\n", comparaarea1);
    printf("Área Carta 2: %.0f\n", comparaarea2);

    printf("PIB Carta 1: %.0f\n", comparapib1);
    printf("PIB Carta 2: %.0f\n", comparapib2);

    printf("Pontos Turisticos Carta 1: %.0f\n", comparapontos1);
    printf("Pontos Turisticos Carta 2: %.0f\n", comparapontos2);

    printf("Densidade Populacional Carta 1: %.0f\n", comparadensidade1);
    printf("Densidade Populacional Carta 2: %.0f\n", comparadensidade2);

    printf("PIB Percapta Carta 1: %.0f\n", comparapercapta1);
    printf("PIB Percapta Carta 2: %.0f\n", comparapercapta2);

    printf("Super Poder Carta 1: %.0f\n", comparasuper1);
    printf("Super Poder Carta 2: %.0f\n", comparasuper2);

    return 0;
}
