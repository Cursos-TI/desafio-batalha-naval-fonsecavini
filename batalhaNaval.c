#include <stdio.h>

// Definição das dimensões do tabuleiro
#define LINHAS 10
#define COLUNAS 10
#define NAVIO 3
#define VAZIO 0

int main() {
    // Declaração do tabuleiro (matriz 10x10) e inicialização com 0s (posições vazias)
    int tabuleiro[LINHAS][COLUNAS] = {0};

    // --- POSICIONAMENTO DOS NAVIOS (Nível Aventureiro) ---
    // Nível Novato: Um navio vertical e um horizontal
    // Nível Aventureiro: Quatro navios, incluindo dois diagonais

    // Navio 1: Vertical (tamanho 3)
    // Coordenadas: (2, 5), (3, 5), (4, 5)
    tabuleiro[2][5] = NAVIO;
    tabuleiro[3][5] = NAVIO;
    tabuleiro[4][5] = NAVIO;

    // Navio 2: Horizontal (tamanho 4)
    // Coordenadas: (6, 2), (6, 3), (6, 4), (6, 5)
    tabuleiro[6][2] = NAVIO;
    tabuleiro[6][3] = NAVIO;
    tabuleiro[6][4] = NAVIO;
    tabuleiro[6][5] = NAVIO;

    // Navio 3: Diagonal Principal (tamanho 3)
    // Coordenadas: (1, 1), (2, 2), (3, 3)
    tabuleiro[1][1] = NAVIO;
    tabuleiro[2][2] = NAVIO;
    tabuleiro[3][3] = NAVIO;

    // Navio 4: Diagonal Secundária (tamanho 2)
    // Coordenadas: (8, 9), (9, 8)
    tabuleiro[8][9] = NAVIO;
    tabuleiro[9][8] = NAVIO;

    // --- EXIBIÇÃO DO TABULEIRO COMPLETO (Nível Aventureiro) ---
    printf("--- Batalha Naval: Tabuleiro (10x10) ---\n");
    printf("0 = Posicao Vazia | 3 = Navio\n\n");
    
    int i, j;
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // Quebra de linha para cada nova linha do tabuleiro
    }

    printf("\n");

    // --- EXIBIÇÃO DAS COORDENADAS DOS NAVIOS (Nível Novato) ---
    printf("--- Coordenadas dos Navios ---\n");
    
    // Coordenadas do Navio 1 (Vertical)
    printf("Navio 1 (Vertical):\n");
    printf("  - Coordenada: (2, 5)\n");
    printf("  - Coordenada: (3, 5)\n");
    printf("  - Coordenada: (4, 5)\n");

    // Coordenadas do Navio 2 (Horizontal)
    printf("Navio 2 (Horizontal):\n");
    printf("  - Coordenada: (6, 2)\n");
    printf("  - Coordenada: (6, 3)\n");
    printf("  - Coordenada: (6, 4)\n");
    printf("  - Coordenada: (6, 5)\n");

    // Coordenadas do Navio 3 (Diagonal Principal)
    printf("Navio 3 (Diagonal):\n");
    printf("  - Coordenada: (1, 1)\n");
    printf("  - Coordenada: (2, 2)\n");
    printf("  - Coordenada: (3, 3)\n");

    // Coordenadas do Navio 4 (Diagonal Secundária)
    printf("Navio 4 (Diagonal):\n");
    printf("  - Coordenada: (8, 9)\n");
    printf("  - Coordenada: (9, 8)\n");
    
    return 0;
}
