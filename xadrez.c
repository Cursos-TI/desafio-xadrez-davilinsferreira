#include <stdio.h>

void moverTorre (int casas) {
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo (int casas) {
    for (int vertical = 1; vertical <= casas; vertical++)
    {
        for (int horizontal = 1; horizontal <= casas; horizontal++)
        {
            if (vertical == horizontal)
            {
                printf("Cima\n");
                printf("Direita\n");
            }
        }
    } 
}

void moverRainha (int casas) {
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

void moverCavalo () {
    for (int vertical = 0; vertical <= 2; vertical++)
    {
        for (int horizontal = 0; horizontal <= 1; horizontal++)
        {
            if (vertical == 2 && horizontal == 1)
            {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
            }
        }
    }
}

int main () {
    
    // Torre
    printf("Movimentação da Torre:\n");
    // Move a Torre 5 casas para a direita
    moverTorre(5);

    // Bispo
    printf("\nMovimentação do Bispo:\n");
    // Move o Bispo 5 casas na diagonal para cima e à direita
    moverBispo(5);

    // Rainha
    printf("\nMovimentação da Rainha:\n");
    // Move a rainha 8 casas para a esquerda
    moverRainha(8);
    
    // Cavalo
    printf("\nMovimentação do Cavalo:\n");
    // Move o cavalo duas casas para cima e 1 para a direita
    moverCavalo();
    
    return 0;
}