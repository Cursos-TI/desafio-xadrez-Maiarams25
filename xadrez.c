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

// Movimento do Cavalo (cima a esquerda)
printf("MOVIMENTO DO CAVALO \n");
int movimentoCimaCavalo = 2;
int movimentoEsquerdaCavalo = 1;
int contador3 = 0;

//Loop for para o movimento vertical (duas casas para cima)
for(int i = 0; i < movimentoCimaCavalo; i++){
  printf("Cima\n");  //imprime a direção do movimento
}

//loop while para o movimento horizontal (uma casa para esquerda)
while (contador3 < movimentoEsquerdaCavalo)
{
  printf("Esquerda\n");  //imprime a direção do movimento
  contador3++;
}

printf("\n");




    return 0;
}
