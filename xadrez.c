#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int b = 0;
    int r = 0;
    int d = 1;
       
    printf("*** Jogo de Xadrez! ***\n\n");
    printf("### Movimentando a Torre! ###\n");

    for (int i = 0; i < 5; i++){
        printf("Direita!\n");
    }

    printf("\n### Movimentando o Bispo! ###\n");

    while (b < 5)
    {
        printf("Na diagonal, para cima e para a direita!\n");
        b++;
    }
    

    printf("\n### Movimentando a Rainha! ###\n");

    do
    {
        printf("Esquerda!\n");
        r++;
        
    } while (r < 8);


     printf("\n### Movimentando o Cavalo! ###\n");

      while (d --){


     for (int c = 0; c < 2; c++){
        printf("Cima!\n");
    }

    printf ("Direita!\n");   
     }

    return 0;
 }



    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

