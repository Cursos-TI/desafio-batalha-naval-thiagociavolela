#include <stdio.h>

int main() {
    int tamanho_tabuleiro = 10;
    int tamanho_navio_vertical = 3;
    int tamanho_navio_horizontal = 4;
    int tamanho_navio_diagonal1 = 3;
    int tamanho_navio_diagonal2 = 4;

    int tabuleiro[tamanho_tabuleiro][tamanho_tabuleiro];
    for (int i = 0; i < tamanho_tabuleiro; i++) {
        for (int j = 0; j < tamanho_tabuleiro; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    
    int x_vertical = 2, y_vertical = 5;
    int x_horizontal = 7, y_horizontal = 1;
    int x_diagonal1 = 1, y_diagonal1 = 1;
    int x_diagonal2 = 6, y_diagonal2 = 6;
    
    for (int i = 0; i < tamanho_navio_vertical; i++) {
        tabuleiro[x_vertical + i][y_vertical] = 3;
    }
    
    for (int i = 0; i < tamanho_navio_horizontal; i++) {
        tabuleiro[x_horizontal][y_horizontal + i] = 3;
    }
    
    for (int i = 0; i < tamanho_navio_diagonal1; i++) {
        tabuleiro[x_diagonal1 + i][y_diagonal1 + i] = 3;
    }
    
    for (int i = 0; i < tamanho_navio_diagonal2; i++) {
        tabuleiro[x_diagonal2 + i][y_diagonal2 - i] = 3;
    }
    
    // Aplicação de habilidades especiais
    int habilidade_x = 4, habilidade_y = 4;
    
    // Cone
    tabuleiro[habilidade_x - 1][habilidade_y] = 1;
    tabuleiro[habilidade_x][habilidade_y - 1] = 1;
    tabuleiro[habilidade_x][habilidade_y] = 1;
    tabuleiro[habilidade_x][habilidade_y + 1] = 1;
    tabuleiro[habilidade_x + 1][habilidade_y - 1] = 1;
    tabuleiro[habilidade_x + 1][habilidade_y] = 1;
    tabuleiro[habilidade_x + 1][habilidade_y + 1] = 1;
    
    // Cruz
    tabuleiro[habilidade_x - 1][habilidade_y] = 1;
    tabuleiro[habilidade_x + 1][habilidade_y] = 1;
    tabuleiro[habilidade_x][habilidade_y - 1] = 1;
    tabuleiro[habilidade_x][habilidade_y + 1] = 1;
    
    // Octaedro
    tabuleiro[habilidade_x - 1][habilidade_y] = 1;
    tabuleiro[habilidade_x + 1][habilidade_y] = 1;
    tabuleiro[habilidade_x][habilidade_y - 1] = 1;
    tabuleiro[habilidade_x][habilidade_y + 1] = 1;
    tabuleiro[habilidade_x][habilidade_y] = 1;
    
    printf("\nTabuleiro:\n");
    for (int i = 0; i < tamanho_tabuleiro; i++) {
        for (int j = 0; j < tamanho_tabuleiro; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
