#include <stdio.h>

// Função recursiva para mover o Bispo: 5 casas na diagonal direita para cima
void moverBispo(int casas_restantes) {
    if (casas_restantes == 0) return;  // Condição de parada

    // Loop aninhado: for para "Cima", while para "Direita"
    for (int i = 0; i < 1; i++) {
        printf("Cima\n");
        int j = 0;
        while (j < 1) {
            printf("Direita\n");
            j++;
        }
    }

    moverBispo(casas_restantes - 1);  // Chamada recursiva
}

// Função recursiva para mover a Torre: 5 casas para a direita
void moverTorre(int casas_restantes) {
    if (casas_restantes == 0) return;  // Condição de parada
    printf("Direita\n");
    moverTorre(casas_restantes - 1);  // Chamada recursiva
}

// Função recursiva para mover a Rainha: 8 casas para a esquerda
void moverRainha(int casas_restantes) {
    if (casas_restantes == 0) return;  // Condição de parada
    printf("Esquerda\n");
    moverRainha(casas_restantes - 1);  // Chamada recursiva
}

// Função para mover o Cavalo: 1 L para cima à direita
void moverCavaloMestre() {
    int passos_cima = 2;  
    int passos_direita = 1;
    int contador = 0;

    while (contador < (passos_cima + passos_direita)) { 
        contador++;

        if (contador > passos_cima + passos_direita) {
            break;  // Break para parar se exceder
        }

        if (contador <= passos_cima) {
            printf("Cima\n");
        } else {
            printf("Direita\n");
        }
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int CASAS_BISPO = 5;
    const int CASAS_TORRE = 5;
    const int CASAS_RAINHA = 8;

    // Implementação de Movimentação do Bispo
    // Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentacao do Bispo (diagonal superior direita):\n");
    for (int i = 0; i < CASAS_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação da Torre
    // Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentacao da Torre (para a direita):\n");
    for (int i = 0; i < CASAS_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimentacao da Rainha (para a esquerda):\n");
    int contador = 0;
    while (contador < CASAS_RAINHA) {
        printf("Esquerda\n");
        contador++;
    }
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimentacao do Cavalo (em L: baixo e esquerda):\n");
    for (int i = 0; i < 2; i++) {  // 2 para baixo
        printf("Baixo\n");
        int j = 0;
        while (j < 1 && i == 1) {  // 1 para esquerda apenas após o segundo baixo
            printf("Esquerda\n");
            j++;
        }
    }
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    printf("Movimentacao do Bispo (Mestre - recursivo):\n");
    moverBispo(CASAS_BISPO);
    printf("\n");

    printf("Movimentacao da Torre (Mestre - recursivo):\n");
    moverTorre(CASAS_TORRE);
    printf("\n");

    printf("Movimentacao da Rainha (Mestre - recursivo):\n");
    moverRainha(CASAS_RAINHA);
    printf("\n");

    // Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    printf("Movimentacao do Cavalo (Mestre):\n");
    moverCavaloMestre();
    printf("\n");

    return 0;
}