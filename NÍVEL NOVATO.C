#include <stdio.h>

// Constantes para movimentos
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

int main() {
    int i;

    // BISPO: 5 movimentos em diagonal superior direita
    // Combinação de "Cima + Direita"
    printf("Movimentos do Bispo (diagonal superior direita):\n");
    for (i = 0; i < MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    printf("\n"); // Separador

    // TORRE: 5 movimentos para a direita
    printf("Movimentos da Torre (direita):\n");
    int j = 0;
    while (j < MOV_TORRE) {
        printf("Direita\n");
        j++;
    }

    printf("\n"); // Separador

    // RAINHA: 8 movimentos para a esquerda
    printf("Movimentos da Rainha (esquerda):\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOV_RAINHA);

    return 0;
}

