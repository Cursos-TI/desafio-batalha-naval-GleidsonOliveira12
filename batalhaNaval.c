#include <stdio.h>

int main() {
    // Letras das linhas (A até J)
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Matriz do tabuleiro
    int tabuleiro[10][10];

    // Preenche o tabuleiro com 0 (representando água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Navio horizontal (3 posições) na linha C
    for (int j = 4; j < 7; j++) {
        tabuleiro[2][j] = 3;
    }

    // Navio vertical (3 posições) na coluna H
    for (int i = 5; i < 8; i++) {
        tabuleiro[i][7] = 3;
    }

    // Cabeçalho com os números das colunas
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf("%2d ", j + 1);
    }
    printf("\n");

    // Exibe o tabuleiro completo sem barras, só com espaços
    for (int i = 0; i < 10; i++) {
        printf("%c  ", linha[i]);
        for (int j = 0; j < 10; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
