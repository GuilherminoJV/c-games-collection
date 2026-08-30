/*
 * ================================================================
 *  Desafio: Super Trunfo - Paises (Cidades)
 *  Nivel: 04 - Versao Aperfeicoada (autoral)
 *  Disciplina: Estruturas de Decisao, Vetores e Tipos em C
 * ----------------------------------------------------------------
 *  Autor: Joao Vitor G.
 *  Curso: Analise e Desenvolvimento de Sistemas (ADS)
 * ----------------------------------------------------------------
 *  Descricao:
 *  Versao refinada do desafio Super Trunfo, construida a partir dos
 *  niveis Novato, Aventureiro e Mestre. Cadastra duas cartas de
 *  cidades, calcula densidade populacional, PIB per capita e Super
 *  Poder, e permite ao jogador escolher dois atributos diferentes
 *  para comparar as cartas, somando os valores e definindo a
 *  vencedora com o operador ternario.
 *
 *  Melhorias aplicadas nesta versao em relacao ao nivel Mestre:
 *  - Uso de "double" para PIB e Super Poder, evitando perda de
 *    precisao em valores grandes (na casa dos bilhoes), que ocorria
 *    com "float".
 *  - Validacao de atributo repetido tratada com um loop, pedindo ao
 *    jogador para escolher novamente em vez de encerrar o programa
 *    sem concluir a comparacao.
 *  - Nomes de variaveis mais descritivos no bloco de comparacao de
 *    atributos.
 *  - Comentarios mais detalhados explicando a logica de cada etapa.
 * ================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {

    // ---------- Declaracao das variaveis - Carta A ----------
    char estadoA[10];
    char codigoA[4];
    char cidadeA[10];
    int populacaoA;
    float areaA;
    double pibA;                 // double: mantem precisao em valores na casa dos bilhoes
    int pontosTuristicosA;
    float densidadeA;
    double pibPerCapitaA;
    double superPoderA;

    // ---------- Declaracao das variaveis - Carta B ----------
    char estadoB[10];
    char codigoB[4];
    char cidadeB[10];
    int populacaoB;
    float areaB;
    double pibB;
    int pontosTuristicosB;
    float densidadeB;
    double pibPerCapitaB;
    double superPoderB;

    // ---------- Cadastro - Carta A ----------
    printf("Digite o Estado da Carta A: ");
    scanf("%s", estadoA);

    printf("Digite o Codigo da Carta A: ");
    scanf("%s", codigoA);

    printf("Digite a Cidade da Carta A: ");
    scanf("%s", cidadeA);

    printf("Digite a Populacao da Carta A: ");
    scanf("%d", &populacaoA);

    printf("Digite a Area da Carta A (km2): ");
    scanf("%f", &areaA);

    printf("Digite o PIB da Carta A: ");
    scanf("%lf", &pibA);

    printf("Digite o numero de Pontos Turisticos da Carta A: ");
    scanf("%d", &pontosTuristicosA);

    // ---------- Cadastro - Carta B ----------
    printf("Digite o Estado da Carta B: ");
    scanf("%s", estadoB);

    printf("Digite o Codigo da Carta B: ");
    scanf("%s", codigoB);

    printf("Digite a Cidade da Carta B: ");
    scanf("%s", cidadeB);

    printf("Digite a Populacao da Carta B: ");
    scanf("%d", &populacaoB);

    printf("Digite a Area da Carta B (km2): ");
    scanf("%f", &areaB);

    printf("Digite o PIB da Carta B: ");
    scanf("%lf", &pibB);

    printf("Digite o numero de Pontos Turisticos da Carta B: ");
    scanf("%d", &pontosTuristicosB);

    // ---------- Calculos - Carta A ----------
    // Densidade demografica: quantos habitantes ocupam cada km2
    densidadeA = populacaoA / areaA;
    // PIB per capita: quanto do PIB total corresponde a cada habitante
    pibPerCapitaA = pibA / populacaoA;
    // Super Poder: soma de todos os atributos numericos, usando o
    // inverso da densidade (1/densidade), ja que menor densidade
    // deve contribuir mais para o poder da carta
    superPoderA = (double)populacaoA + areaA + pibA + (double)pontosTuristicosA
                  + pibPerCapitaA + (1.0 / densidadeA);

    // ---------- Calculos - Carta B ----------
    densidadeB = populacaoB / areaB;
    pibPerCapitaB = pibB / populacaoB;
    superPoderB = (double)populacaoB + areaB + pibB + (double)pontosTuristicosB
                  + pibPerCapitaB + (1.0 / densidadeB);

    // ---------- Exibicao - Carta A ----------
    printf("\nCarta A\n");
    printf("Estado: %s\n", estadoA);
    printf("Codigo: %s\n", codigoA);
    printf("Cidade: %s\n", cidadeA);
    printf("Populacao: %d\n", populacaoA);
    printf("Area: %.2f km2\n", areaA);
    printf("PIB: %.2f\n", pibA);
    printf("Pontos Turisticos: %d\n", pontosTuristicosA);
    printf("Densidade Populacional: %.2f\n", densidadeA);
    printf("PIB per Capita: %.2f\n", pibPerCapitaA);
    printf("Super Poder: %.2f\n", superPoderA);

    // ---------- Exibicao - Carta B ----------
    printf("\nCarta B\n");
    printf("Estado: %s\n", estadoB);
    printf("Codigo: %s\n", codigoB);
    printf("Cidade: %s\n", cidadeB);
    printf("Populacao: %d\n", populacaoB);
    printf("Area: %.2f km2\n", areaB);
    printf("PIB: %.2f\n", pibB);
    printf("Pontos Turisticos: %d\n", pontosTuristicosB);
    printf("Densidade Populacional: %.2f\n", densidadeB);
    printf("PIB per Capita: %.2f\n", pibPerCapitaB);
    printf("Super Poder: %.2f\n", superPoderB);

    // ---------- Comparacao geral entre as Cartas ----------
    printf("\nComparacao entre as Cartas\n");
    printf("Populacao: Carta A e maior que Carta B? %d\n", populacaoA > populacaoB);
    printf("Area: Carta A e maior que Carta B? %d\n", areaA > areaB);
    printf("PIB: Carta A e maior que Carta B? %d\n", pibA > pibB);
    printf("Pontos Turisticos: Carta A e maior que Carta B? %d\n", pontosTuristicosA > pontosTuristicosB);
    printf("Densidade Populacional: Carta A e maior que Carta B? %d\n", densidadeA < densidadeB);
    printf("PIB per Capita: Carta A e maior que Carta B? %d\n", pibPerCapitaA > pibPerCapitaB);
    printf("Super Poder: Carta A e maior que Carta B? %d\n", superPoderA > superPoderB);

    if (pibPerCapitaA > pibPerCapitaB) {
        printf("A Carta %s Venceu (PIB per Capita)!\n", codigoA);
    } else if (pibPerCapitaA < pibPerCapitaB) {
        printf("A Carta %s Venceu (PIB per Capita)!\n", codigoB);
    } else {
        printf("Houve um empate no PIB per Capita!\n");
    }

    // ---------- Menu de comparacao por dois atributos escolhidos ----------
    char atributoEscolha1, atributoEscolha2;
    float valorCartaA1, valorCartaB1, valorCartaA2, valorCartaB2;
    char nomeAtributo1[50], nomeAtributo2[50];

    printf("\nEscolha o primeiro atributo:\n");
    printf("P - Populacao\n");
    printf("A - Area\n");
    printf("I - PIB\n");
    printf("T - Pontos Turisticos\n");
    printf("D - Densidade Demografica\n");
    printf("Escolha: ");
    scanf(" %c", &atributoEscolha1);

    switch (atributoEscolha1) {
        case 'P': case 'p':
            valorCartaA1 = (float)populacaoA;
            valorCartaB1 = (float)populacaoB;
            strcpy(nomeAtributo1, "Populacao");
            break;
        case 'A': case 'a':
            valorCartaA1 = areaA;
            valorCartaB1 = areaB;
            strcpy(nomeAtributo1, "Area");
            break;
        case 'I': case 'i':
            valorCartaA1 = (float)pibA;
            valorCartaB1 = (float)pibB;
            strcpy(nomeAtributo1, "PIB");
            break;
        case 'T': case 't':
            valorCartaA1 = (float)pontosTuristicosA;
            valorCartaB1 = (float)pontosTuristicosB;
            strcpy(nomeAtributo1, "Pontos Turisticos");
            break;
        case 'D': case 'd':
            valorCartaA1 = 1.0f / densidadeA;
            valorCartaB1 = 1.0f / densidadeB;
            strcpy(nomeAtributo1, "Densidade Populacional (Menor Valor Vence)");
            break;
        default:
            printf("Opcao invalida! Considerando Populacao como padrao.\n");
            valorCartaA1 = (float)populacaoA;
            valorCartaB1 = (float)populacaoB;
            strcpy(nomeAtributo1, "Populacao");
            break;
    }

    // Loop para garantir que o segundo atributo seja diferente do primeiro,
    // em vez de simplesmente encerrar o programa quando forem iguais
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    if (atributoEscolha1 != 'P' && atributoEscolha1 != 'p') printf("P - Populacao\n");
    if (atributoEscolha1 != 'A' && atributoEscolha1 != 'a') printf("A - Area\n");
    if (atributoEscolha1 != 'I' && atributoEscolha1 != 'i') printf("I - PIB\n");
    if (atributoEscolha1 != 'T' && atributoEscolha1 != 't') printf("T - Pontos Turisticos\n");
    if (atributoEscolha1 != 'D' && atributoEscolha1 != 'd') printf("D - Densidade Populacional\n");

    do {
        printf("Escolha: ");
        scanf(" %c", &atributoEscolha2);

        if (atributoEscolha2 == atributoEscolha1) {
            printf("Voce ja escolheu esse atributo. Escolha outro diferente.\n");
        }
    } while (atributoEscolha2 == atributoEscolha1);

    switch (atributoEscolha2) {
        case 'P': case 'p':
            valorCartaA2 = (float)populacaoA;
            valorCartaB2 = (float)populacaoB;
            strcpy(nomeAtributo2, "Populacao");
            break;
        case 'A': case 'a':
            valorCartaA2 = areaA;
            valorCartaB2 = areaB;
            strcpy(nomeAtributo2, "Area");
            break;
        case 'I': case 'i':
            valorCartaA2 = (float)pibA;
            valorCartaB2 = (float)pibB;
            strcpy(nomeAtributo2, "PIB");
            break;
        case 'T': case 't':
            valorCartaA2 = (float)pontosTuristicosA;
            valorCartaB2 = (float)pontosTuristicosB;
            strcpy(nomeAtributo2, "Pontos Turisticos");
            break;
        case 'D': case 'd':
            valorCartaA2 = 1.0f / densidadeA;
            valorCartaB2 = 1.0f / densidadeB;
            strcpy(nomeAtributo2, "Densidade Populacional (Menor Valor Vence)");
            break;
        default:
            printf("Opcao invalida! Considerando Area como padrao.\n");
            valorCartaA2 = areaA;
            valorCartaB2 = areaB;
            strcpy(nomeAtributo2, "Area");
            break;
    }

    // ---------- Soma dos atributos escolhidos ----------
    float somaCartaA = valorCartaA1 + valorCartaA2;
    float somaCartaB = valorCartaB1 + valorCartaB2;

    // ---------- Exibicao do resultado final ----------
    printf("\n===== Resultado da Comparacao =====\n");
    printf("Carta A: %s\n", cidadeA);
    printf("Carta B: %s\n", cidadeB);

    printf("\nAtributo 1: %s\n", nomeAtributo1);
    printf("%s: %.2f\n", cidadeA, valorCartaA1);
    printf("%s: %.2f\n", cidadeB, valorCartaB1);

    printf("\nAtributo 2: %s\n", nomeAtributo2);
    printf("%s: %.2f\n", cidadeA, valorCartaA2);
    printf("%s: %.2f\n", cidadeB, valorCartaB2);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", cidadeA, somaCartaA);
    printf("%s: %.2f\n", cidadeB, somaCartaB);

    printf("\nResultado final: %s\n",
           (somaCartaA > somaCartaB) ? "Carta A venceu!" :
           (somaCartaA < somaCartaB ? "Carta B venceu!" : "Empate!"));

    return 0;
}
