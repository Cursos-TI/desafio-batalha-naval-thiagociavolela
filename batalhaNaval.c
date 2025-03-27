#include <stdio.h>

int main() {
    // Definição do tamanho do tabuleiro
    int tamanho_tabuleiro = 10;
    int tamanho_navio_vertical = 3;
    int tamanho_navio_horizontal = 4;
    int tamanho_navio_diagonal1 = 3;
    int tamanho_navio_diagonal2 = 4;
    
    // Definição do tabuleiro
    int tabuleiro[10][10];
    
    // Inicializando o tabuleiro com 0
    for (int i = 0; i < tamanho_tabuleiro; i++) {
        for (int j = 0; j < tamanho_tabuleiro; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    
    // Posição inicial dos navios
    int x_vertical = 2, y_vertical = 5;
    int x_horizontal = 7, y_horizontal = 1;
    int x_diagonal1 = 1, y_diagonal1 = 1;
    int x_diagonal2 = 6, y_diagonal2 = 6;
    
    // Posicionando o navio vertical
    for (int i = 0; i < tamanho_navio_vertical; i++) {
        tabuleiro[x_vertical + i][y_vertical] = 3;
    }
    
    // Posicionando o navio horizontal
    for (int i = 0; i < tamanho_navio_horizontal; i++) {
        tabuleiro[x_horizontal][y_horizontal + i] = 3;
    }
    
    // Posicionando o navio diagonal 1
    for (int i = 0; i < tamanho_navio_diagonal1; i++) {
        tabuleiro[x_diagonal1 + i][y_diagonal1 + i] = 3;
    }
    
    // Posicionando o navio diagonal 2
    for (int i = 0; i < tamanho_navio_diagonal2; i++) {
        tabuleiro[x_diagonal2 + i][y_diagonal2 - i] = 3;
    }
    
    // Exibição das coordenadas dos navios
    printf("Coordenadas do Navio Vertical:\n");
    for (int i = 0; i < tamanho_navio_vertical; i++) {
        printf("(%d, %d)\n", x_vertical + i, y_vertical);
    }
    
    printf("\nCoordenadas do Navio Horizontal:\n");
    for (int i = 0; i < tamanho_navio_horizontal; i++) {
        printf("(%d, %d)\n", x_horizontal, y_horizontal + i);
    }
    
    printf("\nCoordenadas do Navio Diagonal 1:\n");
    for (int i = 0; i < tamanho_navio_diagonal1; i++) {
        printf("(%d, %d)\n", x_diagonal1 + i, y_diagonal1 + i);
    }
    
    printf("\nCoordenadas do Navio Diagonal 2:\n");
    for (int i = 0; i < tamanho_navio_diagonal2; i++) {
        printf("(%d, %d)\n", x_diagonal2 + i, y_diagonal2 - i);
    }
    
    // Exibir tabuleiro
    printf("\nTabuleiro:\n");
    for (int i = 0; i < tamanho_tabuleiro; i++) {
        for (int j = 0; j < tamanho_tabuleiro; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
