#include <stdio.h>

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
    int linhaNavioH = 2;
    int colunaInicialH = 4;
    for (int k = 0; k < 3; k++){
        tabuleiro[linhaNavioH][colunaInicialH + k] = navioHorizontal[k];
    }

    // ---------- Navio vertical ----------
  
    int navioVertical[3] = {3, 3, 3};
    int linhaInicialV = 6;
    int colunaNavioV = 2;
    for (int k = 0; k < 3; k++){
        tabuleiro[linhaInicialV + k][colunaNavioV] = navioVertical[k];
    }

    // ---------- Navio Diagonal (01) ----------
  
    int navioDiagonal1[3] = {3, 3, 3};
    int linhaDiagonal1 = 5;
    int colunaDiagonal1 = 7;
    for(int k = 0; k < 3; k++){
        tabuleiro[linhaDiagonal1 + k][colunaDiagonal1 + k] = navioDiagonal1[k];
    }

    // ---------- Navio Diagonal (02) ----------
  
    int navioDiagonal2[3] = {3, 3, 3};
    int linhaDiagonal2 = 4;
    int colunaDiagonal2 = 5;
    for(int k = 0; k < 3; k++){
        tabuleiro[linhaDiagonal2 + k][colunaDiagonal2 - k] = navioDiagonal2[k];
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
