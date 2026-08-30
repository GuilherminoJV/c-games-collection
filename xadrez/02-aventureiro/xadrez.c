#include <stdio.h>
int main(){
    char peca;

    printf("\n***Bem-Vindo ao jogo de Xadrez***\n");
    printf("Escolha Qual peca voce ira movimentar! \n");
    printf("T. Torre\n");
    printf("B. Bispo\n");
    printf("R. Rainha\n");
    printf("C. Cavalo\n");
    printf("A. Acessar regras do jogo\n");

    printf("Digite a sua escolha: ");
    scanf(" %c", &peca);

    switch (peca)
{
    case 'T': case 't':
        printf("Voce escolheu a 'Torre'\n");
        printf("Movimento da Torre:\n");

        for (int i = 1; i <= 5; i++) {
            printf("Direita\n");
        }
        break;

    case 'B': case 'b':
        printf("Voce escolheu o 'Bispo'\n");
        printf("Movimento do Bispo:\n");

        int bispo = 1;
        do {
            printf("Cima Direita\n");
            bispo++;
        } while (bispo <= 5);
        break;

    case 'R': case 'r':
        printf("Voce escolheu a 'Rainha'\n");
        printf("Movimento da Rainha:\n");

        int rainha = 1;
        while (rainha <= 8) {
            printf("Esquerda\n");
            rainha++;
        }
        break;

    case 'C': case 'c':
        printf("Voce escolheu o 'Cavalo'\n");
        printf("Movimento do Cavalo:\n");

        int cavalo = 1;
        while (cavalo > 0 ){
            for (int i = 0; i < 2; i++)
            {
            printf("Cima\n");
            }
            printf("Direita\n");
            cavalo--;
        }
        break;

    case 'A': case 'a':
        printf("Voce acessou as regras do jogo!\n");
        printf("As regras do jogo sao as seguintes, REGRAS DE MOVIMENTACAO:\n"
        "- Torre: 5 casas para a Direita\n"
        "- Bispo: 5 casas na diagonal (Cima, Direita)\n"
        "- Rainha: 8 casas para a Esquerda\n"
        "- Cavalo: 2 casas para Cima e 1 para a Direita\n");
        break;

    default:
        printf("Opcao Invalida, Tente Novamente!\n");
        break;
}
    return 0;
}
