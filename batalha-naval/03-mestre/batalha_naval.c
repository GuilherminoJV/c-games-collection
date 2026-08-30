#include <stdio.h>
#include <stdlib.h>

int main() {

    int tabuleiro[10][10];

    // ---------- Marcação do Tabuleiro (água) ----------
  
    for(int linha = 0; linha < 10; linha++){
        for(int coluna = 0; coluna < 10; coluna++){
           tabuleiro[linha][coluna] = 0;
        }
    }

    // ---------- Navio horizontal ----------
  
    int navioHorizontal[3] = {3, 3, 3};
    int linhaNavioH = 0;
    int colunaInicialH = 0;
    for (int k = 0; k < 3; k++){
        tabuleiro[linhaNavioH][colunaInicialH + k] = navioHorizontal[k];
    }

    // ---------- Navio vertical ----------
  
    int navioVertical[3] = {3, 3, 3};
    int linhaInicialV = 0;
    int colunaNavioV = 4;
    for (int k = 0; k < 3; k++){
        tabuleiro[linhaInicialV + k][colunaNavioV] = navioVertical[k];
    }

    // ---------- Navio Diagonal (01) - descendo para a direita ----------
  
    int navioDiagonal1[3] = {3, 3, 3};
    int linhaDiagonal1 = 0;
    int colunaDiagonal1 = 6;
    for(int k = 0; k < 3; k++){
        tabuleiro[linhaDiagonal1 + k][colunaDiagonal1 + k] = navioDiagonal1[k];
    }

    // ---------- Navio Diagonal (02) - descendo para a esquerda ----------
  
    int navioDiagonal2[3] = {3, 3, 3};
    int linhaDiagonal2 = 0;
    int colunaDiagonal2 = 9;
    for(int k = 0; k < 3; k++){
        tabuleiro[linhaDiagonal2 + k][colunaDiagonal2 - k] = navioDiagonal2[k];
    }

    // ---------- Matriz da habilidade Cruz (5x5) ----------

    int cruz[5][5];
    int centro = 2;

    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            if (linha == centro || coluna == centro) {
                cruz[linha][coluna] = 1;
            } else {
                cruz[linha][coluna] = 0;
            }
        }
    }

    // ---------- Matriz da habilidade Cone (3x3) ----------

    int cone[3][3];
    int centro2 = 1;

    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            if (abs(coluna - centro2) <= linha) {
                cone[linha][coluna] = 1;
            } else {
                cone[linha][coluna] = 0;
            }
        }
    }

    // ---------- Matriz da habilidade Octaedro (5x5) ----------

    int octaedro[5][5];
    int centro3 = 2;

    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            if (abs(linha - centro3) + abs(coluna - centro3) <= 2) {
                octaedro[linha][coluna] = 1;
            } else {
                octaedro[linha][coluna] = 0;
            }
        }
    }

    // ---------- Sobrepondo a Cruz no tabuleiro ----------

    int origemLinhaCruz = 5;
    int origemColunaCruz = 2;
    int centroCruz = 2;

    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            if (cruz[linha][coluna] == 1) {
                int linhaTabuleiro = origemLinhaCruz + (linha - centroCruz);
                int colunaTabuleiro = origemColunaCruz + (coluna - centroCruz);

                if (linhaTabuleiro >= 0 && linhaTabuleiro < 10 &&
                    colunaTabuleiro >= 0 && colunaTabuleiro < 10) {
                    tabuleiro[linhaTabuleiro][colunaTabuleiro] = 5;
                }
            }
        }
    }

    // ---------- Sobrepondo o Cone no tabuleiro ----------

    int origemLinhaCone = 4;
    int origemColunaCone = 7;
    int centroCone = 1;

    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            if (cone[linha][coluna] == 1) {
                int linhaTabuleiro = origemLinhaCone + (linha - centroCone);
                int colunaTabuleiro = origemColunaCone + (coluna - centroCone);

                if (linhaTabuleiro >= 0 && linhaTabuleiro < 10 &&
                    colunaTabuleiro >= 0 && colunaTabuleiro < 10) {
                    tabuleiro[linhaTabuleiro][colunaTabuleiro] = 5;
                }
            }
        }
    }

    // ---------- Sobrepondo o Octaedro no tabuleiro ----------
  
    int origemLinhaOctaedro = 8;
    int origemColunaOctaedro = 7;
    int centroOctaedro = 2;

    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            if (octaedro[linha][coluna] == 1) {
                int linhaTabuleiro = origemLinhaOctaedro + (linha - centroOctaedro);
                int colunaTabuleiro = origemColunaOctaedro + (coluna - centroOctaedro);

                if (linhaTabuleiro >= 0 && linhaTabuleiro < 10 &&
                    colunaTabuleiro >= 0 && colunaTabuleiro < 10) {
                    tabuleiro[linhaTabuleiro][colunaTabuleiro] = 5;
                }
            }
        }
    }

    // ---------- Marcação do Tabuleiro (linhas e numeros) ----------

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

    return 0;
}
