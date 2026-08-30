#include <stdio.h>

int main() {

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

    // ---------- Área para entrada de dados - Carta 01 ----------
    printf("Digite o estado da carta 01: ");
    scanf("%s", estado1);

    printf("Digite o codigo da carta 01: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da carta 01: ");
    scanf("%s", cidade1);

    printf("Digite a populacao da carta 01: ");
    scanf("%d", &populacao1);

    printf("Digite a area (km2) da carta 01: ");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 01: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da carta 01: ");
    scanf("%d", &pontosturisticos1);

    // ---------- Área para entrada de dados - Carta 02 ----------
    printf("Digite o estado da carta 02: ");
    scanf("%s", estado2);

    printf("Digite o codigo da carta 02: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da carta 02: ");
    scanf("%s", cidade2);

    printf("Digite a populacao da carta 02: ");
    scanf("%d", &populacao2);

    printf("Digite a area (km2) da carta 02: ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 02: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da carta 02: ");
    scanf("%d", &pontosturisticos2);

    // ---------- Cálculo - Carta 01 ----------
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

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

    // ---------- Cálculo - Carta 02 ----------
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

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

    return 0;
}
