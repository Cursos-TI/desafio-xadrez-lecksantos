#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("***Desafio Xadrez***\n\n");
    printf("__Movimento do Bispo__\n");
    int bispo = 1;
    while (bispo <= 5)
    {
        printf("Cima, direita\n");
        bispo++;
    }
    

    // Implementação de Movimentação da Torre
    // Estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("__Movimento da torre__\n");
    int torre = 1;
    do
    {
        printf("Direita\n");
        torre++;
    } while (torre <= 5);
    
    
    // Implementação de Movimentação da Rainha
    //Estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("__Movimento da rainha__\n");
    for (int rainha = 1; rainha <= 8; rainha++)
    {
        printf("Esquerda\n");
    }
    
    
    // Nível Aventureiro - Movimentação do Cavalo
    //Loops aninhados para simular a movimentação do Cavalo em L.
    printf("__Movimento do cavalo__\n");
    for (int cx = 1; cx <= 1; cx++)
    {
        for (int cy = 1; cy <= 2; cy++)
        {
            printf("Baixo\n");                   
        }

    printf("Esquerda\n");    
    }
        
    
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
