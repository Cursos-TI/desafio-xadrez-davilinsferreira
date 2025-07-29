#include <stdio.h>

int main () {
    
    // Torre
    printf("Movimentação da Torre:\n");
    // Move a Torre 5 casa para a direita
    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n");
    }

    // Bispo
    printf("\nMovimentação do Bispo:\n");

    int j = 1;
    // Move o Bispo 5 casas na diagonal para cima e à direita
    while (j <= 5)
    {
        printf("Cima\n");
        printf("Direita\n");
        j++;
    }

    // Rainha
    printf("\nMovimentação da Rainha:\n");

    int k = 1;
    // Move a rainha 8 casas para a esquerda
    do
    {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);
    
    // Cavalo
    printf("\nMovimentação do Cavalo:\n");

    int l = 1;
    // Move o cavalo 2 casas para baixo e uma para a esquerda
    while (l--)
    {
        for (int m = 0; m < 2; m++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }
    
    return 0;
}