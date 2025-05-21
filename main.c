/*
    Autor: Carlos André Sabino
    Nível: Aventureiro
    Descrição:
    Este programa simula a movimentação das peças Bispo, Torre e Rainha,
    utilizando estruturas de repetição e boas práticas de codificação.
*/

#include <stdio.h>

//Número de movimentações das peças
int mov_bispo=5;
int mov_torre=5;
int mov_rainha=8;
int mov_cavalo = 1;
int mov_cavalo2 = 2;

int main() {
    int i; //Controle de Laços
    int j; //Controle de Laços

    printf("==================================\n");
    printf(" Movimentação das peças de xadrez\n");
    printf("==================================\n");

    printf("Movimentação do Bispo\n");
    // O Bispo se move 5 casas na diagonal superior direita,
    // representada por uma combinação de "Cima" e "Direita".

    for (i=0; i < mov_bispo; i++) {
        printf("↑ cima\n");
        printf("→ direita\n");
    }

    printf("\n");

    printf("Movimentação da Torre\n");
    // A Torre se move 5 casas para a direita.

    i=0; //Reinicia o contador.
    while (i < mov_torre) {
        printf("→ direita\n");
        i++;
    }

    printf("\n");

    printf("Movimentação da Rainha\n");
    // A Rainha se move 8 casas para a esquerda.

    i=0; //Reinicia o contador.
    do {
        printf("← esquerda\n");
        i++;
    } while (i < mov_rainha);

    printf("\n");

    printf("Movimentação do Cavalo\n");
    // O Cavalo se move 2 baixo e 1 esquerda.
    // O movimento do cavalo é representado por dois movimentos:,
    // representada por um 'L'.


    // Primeiro movimento: 2 casas para baixo
    for (i = 0; i < mov_cavalo2; i++) {
        printf("baixo ↓\n");

        // Depois do segundo "baixo", faz a esquerda
        if (i == mov_cavalo2 - 1) {
            for (j = 0; j < mov_cavalo; j++) {
                printf("esquerda ←\n");
            }
        }
    }

    printf("\n");
    printf("Fim do programa.");

    return 0;
}
