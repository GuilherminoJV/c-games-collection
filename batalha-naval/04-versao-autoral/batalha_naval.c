/*
 * ================================================================
 *  Desafio: Batalha Naval
 *  Nivel: 04 - Versao Autoral (Menu Interativo)
 *  Disciplina: Matrizes, Loops Aninhados e Estruturas de Decisao em C
 * ----------------------------------------------------------------
 *  Autor: Joao Vitor G.
 *  Curso: Analise e Desenvolvimento de Sistemas (ADS)
 * ----------------------------------------------------------------
 *  Descricao:
 *  Versao autoral construida a partir do nivel Mestre, adicionando
 *  um menu interativo com switch que permite ao jogador escolher o
 *  que deseja visualizar no tabuleiro: apenas os navios, apenas as
 *  habilidades (Cruz, Cone e Octaedro), ou o tabuleiro completo com
 *  ambos. Inclui tratamento de opcao invalida (default) e opcao de
 *  saida do programa.
 * ================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    // ---------- Menu Interativo ----------
    int opcaoMenu;

    printf("*** Bem-Vindo ao Jogo Batalha Naval ***\n");
    printf("Com a ajuda do Menu Interativo tenha acesso ao jogo\n\n");

    printf("1 - Ver Tabuleiro Completo (Navios + Habilidades)\n");
    printf("2 - Ver apenas os Navios\n");
    printf("3 - Ver apenas as Habilidades\n");
    printf("4 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcaoMenu);

    int tabuleiro[10][10];

    switch (opcaoMenu) {

        // ---------- Opcao 1: Tabuleiro Completo ----------
        case 1: {
            // ---------- Marcacao do tabuleiro (agua) ----------
            for (int linha = 0; linha < 10; linha++) {
                for (int coluna = 0; coluna < 10; coluna++) {
                    tabuleiro[linha][coluna] = 0;
                }
            }

            // ---------- Navio horizontal ----------
            int navioHorizontal[3] = {3, 3, 3};
            int linhaNavioH = 0;
            int colunaInicialH = 0;
            for (int k = 0; k < 3; k++) {
                tabuleiro[linhaNavioH][colunaInicialH + k] = navioHorizontal[k];
            }

            // ---------- Navio vertical ----------
            int navioVertical[3] = {3, 3, 3};
            int linhaInicialV = 0;
            int colunaNavioV = 4;
            for (int k = 0; k < 3; k++) {
                tabuleiro[linhaInicialV + k][colunaNavioV] = navioVertical[k];
            }

            // ---------- Navio diagonal (descendo para a direita) ----------
            int navioDiagonal1[3] = {3, 3, 3};
            int linhaDiagonal1 = 0;
            int colunaDiagonal1 = 6;
            for (int k = 0; k < 3; k++) {
                tabuleiro[linhaDiagonal1 + k][colunaDiagonal1 + k] = navioDiagonal1[k];
            }

            // ---------- Navio diagonal (descendo para a esquerda) ----------
            int navioDiagonal2[3] = {3, 3, 3};
            int linhaDiagonal2 = 0;
            int colunaDiagonal2 = 9;
            for (int k = 0; k < 3; k++) {
                tabuleiro[linhaDiagonal2 + k][colunaDiagonal2 - k] = navioDiagonal2[k];
            }

            // ---------- Matriz da habilidade Cruz (5x5) ----------
            int cruz[5][5];
            int centro = 2;
            for (int linha = 0; linha < 5; linha++) {
                for (int coluna = 0; coluna < 5; coluna++) {
                    cruz[linha][coluna] = (linha == centro || coluna == centro) ? 1 : 0;
                }
            }

            // ---------- Matriz da habilidade Cone (3x3) ----------
            int cone[3][3];
            int centroCone2 = 1;
            for (int linha = 0; linha < 3; linha++) {
                for (int coluna = 0; coluna < 3; coluna++) {
                    cone[linha][coluna] = (abs(coluna - centroCone2) <= linha) ? 1 : 0;
                }
            }

            // ---------- Matriz da habilidade Octaedro (5x5) ----------
            int octaedro[5][5];
            int centroOct = 2;
            for (int linha = 0; linha < 5; linha++) {
                for (int coluna = 0; coluna < 5; coluna++) {
                    octaedro[linha][coluna] = (abs(linha - centroOct) + abs(coluna - centroOct) <= 2) ? 1 : 0;
                }
            }

            // ---------- Sobrepondo a Cruz no tabuleiro ----------
            int origemLinhaCruz = 5, origemColunaCruz = 2, centroCruz = 2;
            for (int linha = 0; linha < 5; linha++) {
                for (int coluna = 0; coluna < 5; coluna++) {
                    if (cruz[linha][coluna] == 1) {
                        int linhaTab = origemLinhaCruz + (linha - centroCruz);
                        int colunaTab = origemColunaCruz + (coluna - centroCruz);
                        if (linhaTab >= 0 && linhaTab < 10 && colunaTab >= 0 && colunaTab < 10) {
                            tabuleiro[linhaTab][colunaTab] = 5;
                        }
                    }
                }
            }

            // ---------- Sobrepondo o Cone no tabuleiro ----------
            int origemLinhaCone = 4, origemColunaCone = 7, centroConeOrigem = 1;
            for (int linha = 0; linha < 3; linha++) {
                for (int coluna = 0; coluna < 3; coluna++) {
                    if (cone[linha][coluna] == 1) {
                        int linhaTab = origemLinhaCone + (linha - centroConeOrigem);
                        int colunaTab = origemColunaCone + (coluna - centroConeOrigem);
                        if (linhaTab >= 0 && linhaTab < 10 && colunaTab >= 0 && colunaTab < 10) {
                            tabuleiro[linhaTab][colunaTab] = 5;
                        }
                    }
                }
            }

            // ---------- Sobrepondo o Octaedro no tabuleiro ----------
            int origemLinhaOct = 8, origemColunaOct = 7, centroOctOrigem = 2;
            for (int linha = 0; linha < 5; linha++) {
                for (int coluna = 0; coluna < 5; coluna++) {
                    if (octaedro[linha][coluna] == 1) {
                        int linhaTab = origemLinhaOct + (linha - centroOctOrigem);
                        int colunaTab = origemColunaOct + (coluna - centroOctOrigem);
                        if (linhaTab >= 0 && linhaTab < 10 && colunaTab >= 0 && colunaTab < 10) {
                            tabuleiro[linhaTab][colunaTab] = 5;
                        }
                    }
                }
            }

            // ---------- Exibicao do tabuleiro ----------
            char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
            printf("   ");
            for (int coluna = 0; coluna < 10; coluna++) {
                printf("%c ", letras[coluna]);
            }
            printf("\n");
            for (int linha = 0; linha < 10; linha++) {
                printf("%2d ", linha + 1);
                for (int coluna = 0; coluna < 10; coluna++) {
                    printf("%d ", tabuleiro[linha][coluna]);
                }
                printf("\n");
            }
            break;
        }

        // ---------- Opcao 2: Apenas os Navios ----------
        case 2: {
            for (int linha = 0; linha < 10; linha++) {
                for (int coluna = 0; coluna < 10; coluna++) {
                    tabuleiro[linha][coluna] = 0;
                }
            }

            int navioHorizontal[3] = {3, 3, 3};
            int linhaNavioH = 0;
            int colunaInicialH = 0;
            for (int k = 0; k < 3; k++) {
                tabuleiro[linhaNavioH][colunaInicialH + k] = navioHorizontal[k];
            }

            int navioVertical[3] = {3, 3, 3};
            int linhaInicialV = 0;
            int colunaNavioV = 4;
            for (int k = 0; k < 3; k++) {
                tabuleiro[linhaInicialV + k][colunaNavioV] = navioVertical[k];
            }

            int navioDiagonal1[3] = {3, 3, 3};
            int linhaDiagonal1 = 0;
            int colunaDiagonal1 = 6;
            for (int k = 0; k < 3; k++) {
                tabuleiro[linhaDiagonal1 + k][colunaDiagonal1 + k] = navioDiagonal1[k];
            }

            int navioDiagonal2[3] = {3, 3, 3};
            int linhaDiagonal2 = 0;
            int colunaDiagonal2 = 9;
            for (int k = 0; k < 3; k++) {
                tabuleiro[linhaDiagonal2 + k][colunaDiagonal2 - k] = navioDiagonal2[k];
            }

            char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
            printf("   ");
            for (int coluna = 0; coluna < 10; coluna++) {
                printf("%c ", letras[coluna]);
            }
            printf("\n");
            for (int linha = 0; linha < 10; linha++) {
                printf("%2d ", linha + 1);
                for (int coluna = 0; coluna < 10; coluna++) {
                    printf("%d ", tabuleiro[linha][coluna]);
                }
                printf("\n");
            }
            break;
        }

        // ---------- Opcao 3: Apenas as Habilidades ----------
        case 3: {
            for (int linha = 0; linha < 10; linha++) {
                for (int coluna = 0; coluna < 10; coluna++) {
                    tabuleiro[linha][coluna] = 0;
                }
            }

            int cruz[5][5];
            int centro = 2;
            for (int linha = 0; linha < 5; linha++) {
                for (int coluna = 0; coluna < 5; coluna++) {
                    cruz[linha][coluna] = (linha == centro || coluna == centro) ? 1 : 0;
                }
            }

            int cone[3][3];
            int centroCone2 = 1;
            for (int linha = 0; linha < 3; linha++) {
                for (int coluna = 0; coluna < 3; coluna++) {
                    cone[linha][coluna] = (abs(coluna - centroCone2) <= linha) ? 1 : 0;
                }
            }

            int octaedro[5][5];
            int centroOct = 2;
            for (int linha = 0; linha < 5; linha++) {
                for (int coluna = 0; coluna < 5; coluna++) {
                    octaedro[linha][coluna] = (abs(linha - centroOct) + abs(coluna - centroOct) <= 2) ? 1 : 0;
                }
            }

            int origemLinhaCruz = 5, origemColunaCruz = 2, centroCruz = 2;
            for (int linha = 0; linha < 5; linha++) {
                for (int coluna = 0; coluna < 5; coluna++) {
                    if (cruz[linha][coluna] == 1) {
                        int linhaTab = origemLinhaCruz + (linha - centroCruz);
                        int colunaTab = origemColunaCruz + (coluna - centroCruz);
                        if (linhaTab >= 0 && linhaTab < 10 && colunaTab >= 0 && colunaTab < 10) {
                            tabuleiro[linhaTab][colunaTab] = 5;
                        }
                    }
                }
            }

            int origemLinhaCone = 4, origemColunaCone = 7, centroConeOrigem = 1;
            for (int linha = 0; linha < 3; linha++) {
                for (int coluna = 0; coluna < 3; coluna++) {
                    if (cone[linha][coluna] == 1) {
                        int linhaTab = origemLinhaCone + (linha - centroConeOrigem);
                        int colunaTab = origemColunaCone + (coluna - centroConeOrigem);
                        if (linhaTab >= 0 && linhaTab < 10 && colunaTab >= 0 && colunaTab < 10) {
                            tabuleiro[linhaTab][colunaTab] = 5;
                        }
                    }
                }
            }

            int origemLinhaOct = 8, origemColunaOct = 7, centroOctOrigem = 2;
            for (int linha = 0; linha < 5; linha++) {
                for (int coluna = 0; coluna < 5; coluna++) {
                    if (octaedro[linha][coluna] == 1) {
                        int linhaTab = origemLinhaOct + (linha - centroOctOrigem);
                        int colunaTab = origemColunaOct + (coluna - centroOctOrigem);
                        if (linhaTab >= 0 && linhaTab < 10 && colunaTab >= 0 && colunaTab < 10) {
                            tabuleiro[linhaTab][colunaTab] = 5;
                        }
                    }
                }
            }

            char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
            printf("   ");
            for (int coluna = 0; coluna < 10; coluna++) {
                printf("%c ", letras[coluna]);
            }
            printf("\n");
            for (int linha = 0; linha < 10; linha++) {
                printf("%2d ", linha + 1);
                for (int coluna = 0; coluna < 10; coluna++) {
                    printf("%d ", tabuleiro[linha][coluna]);
                }
                printf("\n");
            }
            break;
        }

        // ---------- Opcao 4: Sair ----------
        case 4:
            printf("Saindo do jogo ='(\n");
            break;

        // ---------- Opcao invalida ----------
        default:
            printf("Opcao invalida! Tente novamente.\n");
            break;
    }

    return 0;
}
