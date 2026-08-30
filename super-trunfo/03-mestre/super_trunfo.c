#include <stdio.h>

int main(){

    // ---------- Declaração das variáveis - Carta 01 ----------
    char estado1[10];
    char codigo1[4];
    char cidade1[10];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapita1;
    float superpoder1;

    // ---------- Declaração das variáveis - Carta 02 ----------
    char estado2[10];
    char codigo2[4];
    char cidade2[10];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;
    float superpoder2;

    // ---------- Área para entrada de dados - Carta 01 ----------
    printf("Digite o Estado da Carta A: ");
    scanf("%s", estado1);

    printf("Digite o Código da Carta A: ");
    scanf("%s", codigo1);

    printf("Digite a Cidade da Carta A: ");
    scanf("%s", cidade1);

    printf("Digite a População da Carta A: ");
    scanf("%d", &populacao1);

    printf("Digite o Área da Carta A: ");
    scanf("%f", &area1);

    printf("Digite o Pib da Carta A: ");
    scanf("%f", &pib1);

    printf("Digite o número de Pontos Turísticos da Carta A: ");
    scanf("%d", &pontosturisticos1);

    // ---------- Área para entrada de dados - Carta 02 ----------
    printf("Digite o Estado da Carta B: ");
    scanf("%s", estado2);

    printf("Digite o Código da Carta B: ");
    scanf("%s", codigo2);

    printf("Digite a Cidade da Carta B: ");
    scanf("%s", cidade2);

    printf("Digite a População da Carta B: ");
    scanf("%d", &populacao2);

    printf("Digite o Área da Carta B: ");
    scanf("%f", &area2);

    printf("Digite o Pib da Carta B: ");
    scanf("%f", &pib2);

    printf("Digite o número de Pontos Turísticos da Carta B: ");
    scanf("%d", &pontosturisticos2);

    // ---------- Cálculo - Carta 01 ----------
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosturisticos1 + pibpercapita1 + (1.0 / densidadepopulacional1);

    // ---------- Área para exibição dos dados - Carta 01 ----------
    printf("\nCarta A\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f = %d / %.2f\n", densidadepopulacional1, populacao1, area1);
    printf("PIB per Capita: %.2f = %.2f / %d\n", pibpercapita1, pib1, populacao1);
    printf("Super Poder: %.2f = %.0f + %.2f + %.2f + %d + %.2f + %.2f\n", superpoder1, (float)populacao1, area1, pib1, pontosturisticos1, pibpercapita1, (1.0 / densidadepopulacional1));

    // ---------- Cálculo - Carta 02 ----------
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + pibpercapita2 + (1.0 / densidadepopulacional2);

    // ---------- Área para exibição dos dados - Carta 02 ----------
    printf("\nCarta B\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f = %d / %.2f\n", densidadepopulacional2, populacao2, area2);
    printf("PIB per Capita: %.2f = %.2f / %d\n", pibpercapita2, pib2, populacao2);
    printf("Super Poder: %.2f = %.0f + %.2f + %.2f + %d + %.2f + %.2f\n", superpoder2, (float)populacao2, area2, pib2, pontosturisticos2, pibpercapita2, (1.0 / densidadepopulacional2));

    // ---------- Comparação entre as Cartas ----------
    printf("\nComparação entre as Cartas\n");
    printf("População: Carta A é maior que Carta B? %d\n", populacao1 > populacao2);
    printf("Área: Carta A é maior que Carta B? %d\n", area1 > area2);
    printf("PIB: Carta A é maior que Carta B? %d\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta A é maior que Carta B? %d\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional: Carta A é maior que Carta B? %d\n", densidadepopulacional1 < densidadepopulacional2);
    printf("PIB per Capita: Carta A é maior que Carta B? %d\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta A é maior que Carta B? %d\n", superpoder1 > superpoder2);

    if (pibpercapita1 > pibpercapita2){
        printf("A Carta %s Venceu!!!\n", codigo1);
    } else if (pibpercapita1 < pibpercapita2){
        printf("A Carta %s Venceu!!\n", codigo2);
    } else {
        printf("Houve um empate!!!\n");
    }

return 0;
}
