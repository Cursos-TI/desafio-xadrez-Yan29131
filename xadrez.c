#include <stdio.h>

// Nível Novato: Movimentação das peças com loops simples

void nivelNovato() {
    printf("Movimentacao do Bispo:\n");
    for (int i = 0; i < 4; i++) {
        printf("Diagonal Superior Direita\n");
    }
    
    printf("\nMovimentacao da Torre:\n");
    for (int i = 0; i < 4; i++) {
        printf("Direita\n");
    }
    
    printf("\nMovimentacao da Rainha:\n");
    for (int i = 0; i < 7; i++) {
        printf("Esquerda\n");
    }
}

// Nível Aventureiro: Movimentação do cavalo com loops aninhados

void nivelAventureiro() {
    printf("\nMovimentacao do Cavalo:\n");
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    int j = 0;
    while (j < 2) {
        printf("Esquerda\n");
        j++;
    }
}

// Nível Mestre: Movimentação usando funções recursivas e condições múltiplas

void moverBispo(int passos) {
    if (passos == 0) return;
    printf("Diagonal Superior Direita\n");
    moverBispo(passos - 1);
}

void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

void moverCavaloMestre() {
    int i = 0, j = 0;
    while (i < 2) {
        printf("Cima\n");
        i++;
    }
    for (j = 0; j < 2; j++) {
        printf("Direita\n");
    }
}

void nivelMestre() {
    printf("\nMovimentacao do Bispo:\n");
    moverBispo(4);
    
    printf("\nMovimentacao da Torre:\n");
    moverTorre(4);
    
    printf("\nMovimentacao da Rainha:\n");
    moverRainha(7);
    
    printf("\nMovimentacao do Cavalo:\n");
    moverCavaloMestre();
}

int main() {
    nivelNovato();
    nivelAventureiro();
    nivelMestre();
    return 0;
}
