#include <stdio.h>

// Desafio de Xadrez - MateCheck

// Função recursiva para mover a Torre
void moverTorre(int casas, char* direcao) {
  if(casas > 0) {
    printf("%s\n", direcao);
    moverTorre(casas - 1, direcao);
  }
}

// Função recursiva para mover o Bispo
void moverBispo(int casas, char* direcao1, char* direcao2){
  if(casas > 0 ) {
    printf("%s, %s\n", direcao1, direcao2);
  }
}

//Função para mover o Bispo usando loops aninhados
void moverBispoLoops(int casas) {
  for (int i = 0; i < casas; i++) {
    for (int j = 0; j < 1; j++) {
      printf("Cima, Direita\n");
    }
  }
}

// Função recursiva para mover a Rainha
void moverRainha(int casas, char* direcao) {
  if (casas > 0) {
    printf("%s\n", direcao);
    moverRainha(casas - 1, direcao);
  }
}

//Função para mover o Cavalo usando loops aninhados
void moverCavalo(int movimentoVertical, int movimentoHorizontal){
  for (int i = 0, j = 0; i < movimentoVertical && j < movimentoHorizontal;) {
    printf ("Cima\n");
    printf("Cima\n");
    printf("Direita\n");
    i++;
    j++;
  }
}

int main() {
  // Movimentação das Peças
  // Movimento da Torre (5x a direita)

  printf("MOVIMENTO DA TORRE:\n");
  moverTorre(5, "Direita"); 
  printf("\n"); //imprime uma linha em branco

  // Movimento do Bispo (diagonal para cima e direita)
  printf("MOVIMENTO DO BISPO \n");
  moverBispo(5, "Cima", "Direita"); 
  printf("\n");

  // Movimento do Bispo (loops aninhados 5x para cima e direita)
  printf("Movimenti do Bispo (Loops Aninhados):\n");
  moverBispoLoops(5);
  printf("\n");

//Movimento da Rainha (8x para a esqueda)
printf("MOVIMENTO DA RAINHA\n");
moverRainha(8, "Esquerda");
printf("\n");

// Movimento do Cavalo (cima a esquerda)
printf("MOVIMENTO DA CAVALO\n");
moverCavalo(2, 1);
printf("\n");


    return 0;
}
