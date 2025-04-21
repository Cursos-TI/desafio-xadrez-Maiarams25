#include <stdio.h>

// Desafio de Xadrez - MateCheck
int main() {
    // Nível Novato - Movimentação das Peças
  //Movimento da Torre (5x a direita)

  printf("MOVIMENTO DA TORRE:\n");

  for(int i = 0; i < 5; i++){
    printf("Direita\n"); //imprime a direção do movimento
  }
  printf("\n"); //imprime uma linha em branco

  //Movimento do Bispo (diagonal para cima e para direita)
  printf("MOVIMENTO DO BISPO \n");
  int casasBispo = 5;
  int contador1 = 0;
  while (contador1 < casasBispo) {
    printf("Cima, Direita\n"); //imprime a direção do movimento
    contador1++;
  }
  printf("\n");

//Movimento da Rainha (horizontal para a esqueda)
printf("MOVIMENTO DA RAINHA\n");
int casasRainha = 8;
int contador2 = 0;

do{
printf("Esquerda\n"); //imprime a direção do movimento
contador2++;
}while(contador2 < casasRainha);
printf("\n");


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
