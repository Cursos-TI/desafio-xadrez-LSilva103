#include <stdio.h>

#define TAM 10   // Tamanho do tabuleiro (10x10)
#define NAVIO 3  // Valor que representa as partes do navio
#define AGUA 0   // Valor que representa a água

int main() {
    int tabuleiro[TAM][TAM]; // Matriz 10x10 para representar o tabuleiro
    int i, j;

    // 1. Inicializa todas as posições do tabuleiro com 0 (água)
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // 2. Posiciona os navios (tamanho fixo = 3)
    // As coordenadas foram definidas diretamente no código conforme as simplificações

    // Navio 1 - horizontal
    int linha1 = 2, coluna1 = 4;
    for (j = coluna1; j < coluna1 + 3; j++) {
        tabuleiro[linha1][j] = NAVIO;
    }

    // Navio 2 - vertical
    int linha2 = 5, coluna2 = 7;
    for (i = linha2; i < linha2 + 3; i++) {
        tabuleiro[i][coluna2] = NAVIO;
    }

    // Navio 3 - horizontal
    int linha3 = 8, coluna3 = 1;
    for (j = coluna3; j < coluna3 + 3; j++) {
        tabuleiro[linha3][j] = NAVIO;
    }

    // 3. Exibe o tabuleiro no console
    printf("=== TABULEIRO DE BATALHA NAVAL ===\n\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]); // Mostra cada posição separada por espaço
        }
        printf("\n"); // Quebra de linha a cada linha da matriz
    }

    printf("\nLegenda: 0 = Água | 3 = Navio\n");

    return 0;
}