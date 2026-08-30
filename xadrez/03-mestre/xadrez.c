#include <stdio.h>

// ---------- Funcoes recursivas ----------

// Move a Torre para a direita, uma casa por chamada, ate zerar as
// casas restantes (caso base: casaTorre == 0)
void moverTorre(int casaTorre) {
    if (casaTorre > 0) {
        printf("Direita\n");
        moverTorre(casaTorre - 1);
    }
}

// Move a Rainha para a esquerda, seguindo a mesma logica recursiva
void moverRainha(int casaRainha) {
    if (casaRainha > 0) {
        printf("Esquerda\n");
        moverRainha(casaRainha - 1);
    }
}

// ---------- Funcao principal ----------

int main() {
    char peca;

    // ---------- Menu Interativo ----------

    printf("\n***Bem-Vindo ao jogo de Xadrez***\n");
    printf("Escolha Qual peca voce ira movimentar! \n");
    printf("T. Torre\n");
    printf("B. Bispo\n");
    printf("R. Rainha\n");
    printf("C. Cavalo\n");
    printf("A. Acessar regras do jogo\n");

    printf("Digite a sua escolha: ");
    scanf(" %c", &peca);

    switch (peca) {

        case 'T': case 't':
            printf("Voce escolheu a 'Torre'\n");
            printf("Movimento da Torre:\n");
            moverTorre(5);
            break;

        case 'B': case 'b':
            printf("Voce escolheu o 'Bispo'\n");
            printf("Movimento do Bispo:\n");

            // Loop externo: movimento vertical (uma casa "Cima" por vez)
            for (int moverBispoVertical = 1; moverBispoVertical <= 5; moverBispoVertical++) {
                printf("Cima\n");

                // Loop interno: movimento horizontal correspondente
                for (int moverBispoHorizontal = 1; moverBispoHorizontal <= 1; moverBispoHorizontal++) {
                    printf("Direita\n");
                }
            }
            break;

        case 'R': case 'r':
            printf("Voce escolheu a 'Rainha'\n");
            printf("Movimento da Rainha:\n");
            moverRainha(8);
            break;

        case 'C': case 'c':
            printf("Voce escolheu o 'Cavalo'\n");
            printf("Movimento do Cavalo:\n");

            // Loop aninhado com multiplas variaveis/condicoes:
            // o Cavalo sobe 2 casas, e so na segunda casa (moverCavalo == 2)
            // o loop interno executa, simulando o passo final para a direita
            for (int moverCavalo = 1; moverCavalo <= 2; moverCavalo++) {
                printf("Cima\n");

                for (int casaCavalo = 1; casaCavalo <= 1 && moverCavalo == 2; casaCavalo++) {
                    printf("Direita\n");
                }
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
