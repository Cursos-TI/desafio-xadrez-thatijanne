#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentotorre (int casa){
    if (casa > 0){
        printf("Direita!\n");
        movimentotorre (casa - 1);    
    }
}

void movimentobispo (int casa){
    if (casa > 0){
        printf("Na diagonal, para cima e para a direita!\n");
        movimentobispo (casa - 1);    
    }
}

void movimentorainha (int casa){
    if (casa > 0){
        printf("Esquerda!\n");
        movimentorainha (casa - 1);    
    }
}

void movimentocavalo (int casa){
    while (casa --){

     for (int c = 0; c < 2; c++){
        printf("Cima!\n");
    }

    printf ("Direita!\n");   
     }
}

int main() {

    int d = 1;
      
    printf("*** Jogo de Xadrez! ***\n\n");
    printf("### Movimentando a Torre! ###\n");

    movimentotorre(5);

    printf("\n### Movimentando o Bispo! ###\n");

    movimentobispo (5);

    printf("\n### Movimentando a Rainha! ###\n");

    movimentorainha (8);

    printf("\n### Movimentando o Cavalo! ###\n");

    movimentocavalo (1);    

    return 0;
 }