/*
Autor: Carlos André Sabino
Nível: Mestre
Descrição:
Este programa simula a movimentação das peças Bispo, Torre, Rainha e Cavalo,
utilizando estruturas de repetição e recursividade para movimentos complexos.
*/

#include <stdio.h> // Biblioteca padrão de entrada e saída

// Variáveis globais usadas nos loops
int i, j;

//--------------------------------------
// Função recursiva que simula a Torre
//--------------------------------------
// A Torre se move em linha reta (horizontal ou vertical).
// Aqui, simulamos o movimento "Direita" com recursão.
void torre(int casas) {
    if (casas <= 0) {
        return; // Caso base: encerra a recursão quando não há mais casas
    }
    printf("Direita\n"); // Um passo para a direita
    torre(casas - 1);    // Chamada recursiva para o próximo passo
}

//--------------------------------------------------
// Função recursiva com laços que simula o Bispo
//--------------------------------------------------
// O Bispo se move em diagonal. Aqui usamos loops aninhados
// para simular um passo "Cima" + "Direita", recursivamente.
void bispo(int casas_restantes) {
    if (casas_restantes <= 0) {
        return; // Caso base da recursão
    }

    // Um passo "diagonal" (1x Cima e 1x Direita)
    for (i = 0; i < 1; i++) {
        printf("Cima\n");
        for (j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }

    bispo(casas_restantes - 1); // Recursão: próximo passo diagonal
}

//------------------------------------------------------
// Função recursiva que simula a Rainha (modo simplificado)
//------------------------------------------------------
// A Rainha pode mover-se como Torre e Bispo. Aqui simulamos
// apenas movimentos "Esquerda", com recursão simples.
void rainha(int casas) {
    if (casas <= 0) {
        return; // Caso base
    }
    printf("Esquerda\n");  // Um passo para a esquerda
    rainha(casas - 1);     // Próximo passo
}

//------------------------------------------------------
// Função que simula o movimento do Cavalo
//------------------------------------------------------
// O Cavalo move-se em "L" (2 casas em uma direção + 1 em outra).
// Aqui, fazemos 2x "Cima" e 1x "Direita", com exemplos de `continue` e `break`.
void cavalo() {
    printf("=========================\n");
    printf(" Movimentação do Cavalo\n");
    printf("=========================\n");

    int mov_vertical = 2;    // Duas casas para cima
    int mov_horizontal = 1;  // Uma casa para a direita
    int k, l;

    // Loop para as duas subidas
    for (k = 0; k < mov_vertical; k++) {
        printf("Cima\n");

        // Exemplo didático de uso do `continue`
        if (k == 0) {
            continue; // Pula o restante da iteração
        }
    }

    // Loop para um movimento horizontal
    for (l = 0; l < mov_horizontal; l++) {
        printf("Direita\n");

        // Exemplo de uso do `break`
        if (l == 0 && mov_horizontal > 0) {
            break; // Encerra o loop após o primeiro passo
        }
    }
}

//-------------------------
// Função principal
//-------------------------
int main() {
    int num_casas_torre_bispo = 5; // Quantidade de casas para Torre e Bispo
    int num_casas_rainha = 8;      // Quantidade de casas para a Rainha

    printf("=========================\n");
    printf(" Movimentação da Torre \n");
    printf("=========================\n");
    torre(num_casas_torre_bispo);
    printf("\n");

    printf("=========================\n");
    printf(" Movimentação do Bispo \n");
    printf("=========================\n");
    bispo(num_casas_torre_bispo);
    printf("\n");

    printf("=========================\n");
    printf(" Movimentação da Rainha \n");
    printf("=========================\n");
    rainha(num_casas_rainha);
    printf("\n");

    // Movimentação do Cavalo
    cavalo();
    printf("\n");

    return 0; // Fim do programa
}
