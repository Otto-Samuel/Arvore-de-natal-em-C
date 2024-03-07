#include <stdio.h>

int main() {
    int altura = 20; // Altere este valor para ajustar a altura da árvore

    // Loop para cada linha da árvore
    for (int i = 0; i < altura; i++) {
        // Espaços em branco antes dos asteriscos
        for (int j = 0; j < altura - i - 1; j++) {
            printf(" ");
        }

        // Asteriscos
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }

        // Pular para a próxima linha após imprimir uma linha da árvore
        printf("\n");
    }

    // Tronco da árvore
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < altura - 1; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    // Presentes debaixo da árvore
    printf("\n");
    printf("       * *                 * *    \n");
    printf("    * * * * *           * * * * *\n");
    printf("    *   *   *           *   *   *\n");
    printf("    *********           *********\n");
    printf("    *   *   *           *   *   *\n");
    printf("    *********           *********\n");

    return 0;
}
