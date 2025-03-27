#include <stdio.h>

int main() {
    // Definição do tamanho do tabuleiro
    int tamanho_tabuleiro = 10;
    int tamanho_navio_vertical = 3;
    int tamanho_navio_horizontal = 4;
    
    // Definição do tabuleiro
    char tabuleiro[10][10];
    
    // Inicializando o tabuleiro com '.'
    for (int i = 0; i < tamanho_tabuleiro; i++) {
        for (int j = 0; j < tamanho_tabuleiro; j++) {
            tabuleiro[i][j] = '.';
        }
    }
    
    // Posição inicial do navio vertical
    int x_vertical = 2, y_vertical = 5;
    
    // Posição inicial do navio horizontal
    int x_horizontal = 7, y_horizontal = 1;
    
    // Posicionando o navio vertical
    for (int i = 0; i < tamanho_navio_vertical; i++) {
        tabuleiro[x_vertical + i][y_vertical] = 'V';
    }
    
    // Posicionando o navio horizontal
    for (int i = 0; i < tamanho_navio_horizontal; i++) {
        tabuleiro[x_horizontal][y_horizontal + i] = 'H';
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
    
    // Exibir tabuleiro
    printf("\nTabuleiro:\n");
    for (int i = 0; i < tamanho_tabuleiro; i++) {
        for (int j = 0; j < tamanho_tabuleiro; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
